#include<iostream>

using namespace std;

void printArr(int *arr, int length)
{

	for (int i = 0; i < length; i++)
		cout << *(arr + i) << "  ";
	cout << endl;
}

void n_nested_for1(int *arr, int length, int index,int times) // variations with repetition
{

	if (length == index)
	{
		printArr(arr, length);
	}
	else{

		for (int i = 0; i < times; i++)
		{
			arr[index] = i;
			n_nested_for1(arr, length, index + 1, times);

		}
	}

}

void n_nested_for2(int *arr, int length, int index, int times,bool *used) // variations without repetition (used[times] == permutation)
{

	if (length == index)
	{
		printArr(arr, length);
	}
	else{

		for (int i = 0; i < times; i++)
		{
			if (!used[i])
			{
				used[i] = true;
				arr[index] = i;
				n_nested_for2(arr, length, index + 1, times, used);
				used[i] = false;

			}
		}
	}

}

void permutate(int * arr, int length, int index)
{
	if (index == length)
	{
		printArr(arr, length);
	}
	else{

		permutate(arr, length, index + 1);

		for (int i = index+1; i < length; i++)  // replace with these right from current
		{
			swap(*(arr + index), *(arr + i));
			permutate(arr, length, index + 1);
			swap(*(arr + i), *(arr + index));

		}
	}

}

void combination1(int * arr, int length, int index,int times,int start)//without repetition
{
	if (index == length)
	{
		printArr(arr, length);
	}
	else{

		for (int i = start; i < times; i++)
		{
			arr[index] = i;
			combination1(arr, length, index + 1,times, i + 1);

		}
	}

}

void combination2(int * arr, int length, int index, int times, int start)//with repetition
{
	if (index == length)
	{
		printArr(arr, length);
	}
	else{

		for (int i = start; i < times; i++)
		{
			arr[index] = i;
			combination2(arr, length, index + 1, times, i);

		}
	}

}

int main()
{
	int arr[3] = {0};
	bool used[3] = {false}; //with length = times
	//int arr2[3] = { 1, 2, 3 };
	int arr3[2];
	
	// n_nested_for1(arr, 3, 0, 3);
    //  n_nested_for2(arr, 3, 0,3 ,used);
    //  permutate(arr, 4, 0);
   // 	combination2(arr3, 2, 0,3, 0);


	system("pause");
	return 0;
}