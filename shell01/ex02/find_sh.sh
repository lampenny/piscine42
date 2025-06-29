find . -type f -regex ".*\.sh" | sed 's|.sh$||' | sed 's|.*/||'
