#include <iostream>
#include "ItemType.h"
#include "sorted.h"
#include "unsorted.h"

using namespace std;

void UnsortedType::DeleteItem_a(ItemType item)
//function: 리스트 내에서 주어진 item을 삭제한다. 
// Pre:  item의 key들은 초기화되어야 한다.
// Post: 주어진 item과 같은 element가 리스트 내에 없다.
{
	bool deleted = false;
	for (int i = 0; i < length && !deleted; i++) {
		if (item.ComparedTo(info[i]) == EQUAL) {
			info[i] = info[length - 1];
			length--;
			deleted = true;
		}
	}
}

void UnsortedType::DeleteItem_c(ItemType item)
//function: 리스트 내에서 주어진 item을 삭제한다. 
// Pre:  item의 key들은 초기화되어야 한다.
// Post: 주어진 item과 같은 element가 리스트 내에 없다.
{
	int i = 0;
	while (i < length) {
		if (item.ComparedTo(info[i]) == EQUAL) {
			info[i] = info[length - 1];
			length--;
		}
		else {
			i++;
		}
	}
}

int main() {
	SortedType s_list1, s_list2, s_list3;
	ItemType item1, item2, item3, item4, item5;
	item1.Initialize(1);
	item2.Initialize(2);
	item3.Initialize(3);
	item4.Initialize(4);
	item5.Initialize(5);
	s_list1.InsertItem(item1);
	s_list1.InsertItem(item2);
	s_list1.InsertItem(item4);
	s_list2.InsertItem(item2);
	s_list2.InsertItem(item5);
	MergeList(s_list1, s_list2, s_list3);
	return 0;


}
void MergeList(SortedType list1, SortedType list2, SortedType& result) {
	ItemType item;
	list1.ResetList();
	list2.ResetList();
	int list1_len = list1.LengthIs();
	int list2_len = list2.LengthIs();

	for (int i = 0; i < list1_len; i++) {
		list1.GetNextItem(item);
		result.InsertItem(item);
	}
	for (int i = 0; i < list2_len; i++) {
		list2.GetNextItem(item);
		result.InsertItem(item);
	}
}