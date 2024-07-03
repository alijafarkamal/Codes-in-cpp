
#include<iostream>
using namespace std;


//MADE WITHOUT USING ANY BUILT IN FUNCTON


void createindex(char** tweets, int size) {
	int count = 0;//word length
	int dummylimiter = 0;

	int arr2D[21][5];
	int arr1D_heap[100];
	int i_arr1D_heap = 0;

	int i_arr2D = 0;
	int j_arr2D = 0;
	char compareter[100];
	int limiter = 0;
	int i_temp = 0;
	int j_temp = 0;
	char temp[100][100] = { 0 };
	int max = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; tweets[i][j] != '\0'; j++) {
			//if blank space is found
			j_temp = 0;
			if (tweets[i][j] != '0' && tweets[i][j - 1] != '0' && limiter < j &&
				tweets[i][j + 1] == ' ' || tweets[i][j + 1] == '\0')
			{
				int jgetter = j; //column space storage

				//goooood assigning
				for (int k = limiter; k <= jgetter; k++) {
					if (tweets[i][k] != '0') {
						if (tweets[i][k] == ' ' && tweets[i][k] != '  ') {
							i_temp++; j_temp = 0;
						}
						//if(tweets[i][k] >= 'a' && tweets[i][k] <= 'z' || tweets[i][k]=='32') {
						temp[i_temp][j_temp++] = tweets[i][k];
						compareter[j_temp - 1] = tweets[i][k];

						//else if (tweets[i][k] == '0') break;
					}
				}
				temp[i_temp++][j_temp] = '\0';
				compareter[j_temp] = '\0';
				arr2D[i_arr2D][j_arr2D++] = i + 1;
				max = i + 1;

				j_temp = 0;
				limiter = j + 2;
				bool deleter = false;
				dummylimiter = limiter;

				//loop for deletion common word
				for (int k = i; k < 4; k++) {
					for (int l = dummylimiter; tweets[k][l] != '\0'; l++)
					{
						if (compareter[j_temp] == tweets[k][l] && tweets[k][l] != '0')
						{
							for (int m = l + 1; tweets[k][m] != ' ' && tweets[k][m] != '\0'; m++) {
								j_temp++;
								if (compareter[j_temp] != tweets[k][m] || tweets[k][m] == '0') {
									j_temp = 0;
									deleter = false;
									break;
								}
								else {
									deleter = true;
								}
							}

							if (deleter) {
								for (int m = l; tweets[k][m] != ' ' && tweets[k][m] != '\0'; m++)
								{
									tweets[k][m] = '0';
								}
								if (k + 1 > max) {

									arr2D[i_arr2D][j_arr2D++] = k + 1;
									max = k + 1;
								}

							}
						}
						deleter = false;
						j_temp = 0;
					}
					dummylimiter = 0;
				}
				arr1D_heap[i_arr1D_heap] = max;
				arr2D[i_arr2D][j_arr2D] = -1;
				i_arr2D++;
				j_arr2D = 0;
				i_arr1D_heap++;
				max = 0;

			}

			compareter[0] = { 0 };

		}
		limiter = 0;
		dummylimiter = 0;
	}
	//Deleter
	char** final = new char* [11];
	int finala = 0;
	int i_final = 0;
	int calculate = 0;
	char storer[20];
	for (int i = 0; i < size; i++) {
		for (int j = 0; temp[i][j] != '\0'; j++) {
			if (temp[i][j] >= 'a' && temp[i][j] <= 'z')
			{
				storer[i_final++] = temp[i][j];
				calculate++;
			}
		}
		storer[i_final] = '\0';
		i_final = 0;
		if (calculate != 0) {
			int k; final[finala++] = new char[calculate + 1];
			for (k = 0; k < calculate && storer[k] != '\0'; k++)
				final[finala - 1][k] = storer[k];
			final[finala - 1][k] = '\0';
		}
		calculate = 0;
	}
	for (int i = 6; i < 11; i++)
	{
		int temp = arr2D[i][0];
		arr2D[i][0] = arr2D[i + 2][0];
		arr2D[i + 2][0] = temp;
	}
	int** heap_2D = new int* [11];
	int calcu = 0;
	for (int i = 0; i < 11; i++) 
		heap_2D[i] = new int[arr1D_heap[i]];
	
	
	for(int j = 0; j<11; j++)
	for (int i = 0; i <=arr1D_heap[j]; i++)
		heap_2D[j][i] = arr2D[j][i];

	for (int i = 0; i < 11; i++) {
		if(i<11)
		for (int j = 0; final[i][j] != '\0'; j++) {
			cout << final[i][j];
		}
		for (int j = 0; j <= arr1D_heap[i]; j++) {
			if (heap_2D[i][j] >= -1 && heap_2D[i][j] <= 4)
				cout << " " << heap_2D[i][j];
			}
		cout << endl;
	}
	for (int i = 0; i <11; i++)
	{
		delete[] final[i];
		delete[] heap_2D[i];
		final[i] = nullptr;
		heap_2D[i] = nullptr;
	}
	final = nullptr;
	heap_2D = nullptr;

}
int main() {
	char chr[4][100] =
	{ "breakthrough drug schizophrenia drug released july",
	 "new schizophrenia drug breakthrough drug",
	 "new approach treatment schizophrenia",
	"new hopes schizophrenia patients schizophrenia cure" };
	int arr[4];
	int count = 0;

	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		count = 0;
		for (int j = 0; chr[i][j] != '\0'; j++)
		{

			if (chr[i][j] == ' ' || chr[i][j + 1] == '\0')
				sum++;
			count++;

		}
		arr[i] = count;
	}


	char** ch = new char* [4];
	for (int i = 0; i < 4; i++)
		ch[i] = new char[arr[i]];
	//memory allocate
	for (int i = 0; i < 4; i++) {
		int j;
		for (j = 0; j < arr[i]; j++)
		{
			ch[i][j] = chr[i][j];
		}
		ch[i][j] = '\0';
	}
	createindex(ch, sum);
	for (int i = 0; i < 4; i++)
	{	delete[] ch[i];
	ch[i] = nullptr;
	}
	ch = nullptr;
	system("pause");
	return 0;
}