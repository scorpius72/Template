create file --> s.sh file  Run in the termianl --> bash s.sh

for ((i = 1; i <= 100; ++i)) ; do
	echo $i
	./gen $i > int 
	./a < int > out1  // here a is the bad file name
	./brute < int > out2	// here brute is the good file name
	diff -w out1 out2 || break
done 

echo "WA on the following test:"
cat int
echo "Your answer is:"
cat out1
echo "Correct answer is:"
cat out2