//#include <iostream>
//#include <cstdlib>
//
//void merge(int list[], int start, int end, int mid)
//{
//	int mergedList[8];
//	int i, j, k;
//	i = start;
//	k = start;
//	j = mid + 1;
//
//	while (i <= mid && j <= end) {
//		if (list[i] < list[j]) {
//			mergedList[k] = list[i];
//			k++;
//			i++;
//		}
//		else {
//			mergedList[k] = list[j];
//			k++;
//			j++;
//		}
//	}
//
//	while (i <= mid) {
//		mergedList[k] = list[i];
//		k++;
//		i++;
//	}
//
//	while (j <= end) {
//		mergedList[k] = list[j];
//		k++;
//		j++;
//	}
//
//	for (i = start; i < k; i++) {
//		list[i] = mergedList[i];
//	}
//}
//void mergeSort(int list[], int start, int end)
//{
//	int mid;
//	if (start < end) {
//
//		mid = (start + end) / 2;
//		mergeSort(list, start, mid);
//		mergeSort(list, mid + 1, end);
//		merge(list, start, end, mid);
//	}
//}
//int main()
//{
//	int list[8] = { 0,0,0,0,0,0,0,0 };
//	std::cout << "Input array ...\n";
//	for (int i = 0; i < 8; i++)
//	{
//		std::cout << list[i] << "\t";
//	}
//	mergeSort(list, 0, 7);
//	std:: cout << "\n\nSorted array ... \n";
//	for (int i = 0; i < 8; i++)
//	{
//		std::cout << list[i] << "\t";
//	}
//}