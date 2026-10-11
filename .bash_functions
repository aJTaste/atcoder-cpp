run() {
    local src="${1:-main.cpp}"
    local exe="${2:-${src%.*}}"
    g++ -std=c++23 -O0 -g -Wall -Wextra -Wshadow -fsanitize=address,undefined "${src}" -o "${exe}" && "./${exe}"
}
mkabc() {
    if [ $# -ne 1 ]; then
    return 1
    fi
    local dir="${HOME}/work/cpp-study/abc"
    local alphabet=({a..g})
    local contest="abc$1"
    for ((i=0; i<${#alphabet[@]}; i++))
    do
    local dirabc="${dir}/${contest}/${contest}_${alphabet[i]}"
    mkdir -p "${dirabc}"
    if [ ! -f "${dirabc}/main.cpp" ]; then
    cat > "${dirabc}/main.cpp" << EOF
// ${contest}_${alphabet[i]}
#include <bits/stdc++.h>
using namespace std;
int main()
{
}
EOF
    fi
    done
    cd "${dir}/${contest}/${contest}_a"
    code main.cpp
}
_move_problem() {
    local step="${1}"
    if [[ ! "$(basename "${PWD}")" =~ ^abc[0-9]{3}_[a-g]$ ]]; then
    echo "ディレクトリが違います"
    return 1
    fi
    local current="$(basename "${PWD}")"
    local dif="${current: -1}"
    if [[ ( "${dif}" == "g" && "${step}" -eq 1 ) || ( "${dif}" == "a" && "${step}" -eq -1 ) ]]; then
    echo "次に行けません"
    else
    local alphabet=({a..g})
    cd ../
    for ((i=0; i<${#alphabet[@]}; i++))
    do
    if [[ "${dif}" == "${alphabet[i]}" ]]; then
    local contest="$(basename "${PWD}")"
    cd "${contest}_${alphabet[i+${step}]}"
    code main.cpp
    break
    fi
    done
    fi
}
next() {
    _move_problem "${1:-1}"
}
prev() {
    _move_problem "${1:--1}"
}
mkd() {
    mkdir -p "${1}"
    cd "${1}"
}
mkdd() {
    cd ../
    mkdir -p "${1}"
    cd "${1}"
}
mkf() {
    touch "${1}"
    code "${1}"
}
sbf() {
    code ~/cpp-study/work/.bash_functions
}
sbr() {
    source ~/.bashrc
}
# 2026/10/12（今日から日付を書くようにしよう）
# 今日から.bash_functionsはcpp-studyに置くことにした（sbfいらないのでは？）
# cpp-studyのgitコマンド簡易化
gitaddcpp(){
    git add ~/work/cpp-study/
}
pushcpp(){
    git add ~/work/cpp-study/
    git commit -m "${1}"
    git push
}
