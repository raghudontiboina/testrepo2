r=`expr $# % 2`
if [ $r -ne 0 ]
then
echo neter even no of arguments
count=1
while [ $count -le $# ]
do
cp $1 $2
shift
shift
count=`expr $count + 1`
done
fi
