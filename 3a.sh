if [ -e $1 ]
then
set -- `ls -ld$1`
echo "permissions are $1"
echo "file lines count is $2"
echo "username is $3"
echo "group name $4"
echo "file size is$5"
echo "month is $6" 
echo "modifictaion is done $6 $7 $8"
else
echo "file doesnot exists" 
fi

