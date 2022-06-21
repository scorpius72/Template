int rand(int a, int b)
	return a + rand()%(b-a+1);
int main (int argc , char* argv[])
{
	srand(atoi(argv[1]));
	int n = rand(2,10);
}

run the generate file ---> ./gen 1 or ./gen 2