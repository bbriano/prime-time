SOLUTIONS='naive sqrt primediv'

for s in $SOLUTIONS; do
    echo "$s solution:"
    time (./$s > /dev/null)
    echo
done
