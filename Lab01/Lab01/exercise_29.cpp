#include "StrType.h"
#include <cstring>
/*
RelationType StrType::ComparedTo(StrType& otherString) { //Using strcmp
	int state = strcmp(this->letters, otherString.letters);
	if (state == -1) {
		return LESS;
	}
	else if (state == 1) {
		return GREATER;
	}
	else if (state == 0) {
		return EQUAL;
	}
}
*/

RelationType StrType::ComparedTo(StrType& otherString) {
	int idx = 0;
	while ((this->letters[idx] != '\0' || otherString.letters[idx] != '\0') && this->letters[idx] == otherString.letters[idx]) {
		idx++;
		if (this->letters[idx] == '\0' && otherString.letters[idx] == '\0') {
			return EQUAL;
		}
		else if(this->letters[idx] != '\0') {
			return LESS;
		}
		else {
			return GREATER;
		}

		if (this->letters[idx] > otherString.letters[idx]) {
			return GREATER;
		}
		else if (this->letters[idx] > otherString.letters[idx]) {
			return LESS;
		}
	}
	if (this->letters[idx] > otherString.letters[idx]) {
		return GREATER;
	}
	else if (this->letters[idx] > otherString.letters[idx]) {
		return LESS;
	}
}