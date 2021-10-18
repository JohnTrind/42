find . -name '*.sh' -type f | awk -F'/' '{print $NF}' | sed 's/\.sh//'

