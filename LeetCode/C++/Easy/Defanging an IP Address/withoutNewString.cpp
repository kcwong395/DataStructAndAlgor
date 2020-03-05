class Solution {
public:
	string defangIPaddr(string address) {

		address += "      ";
		int curIndex = address.length() - 1;

		for (int i = curIndex - 6; i >= 0; i--) {
			if (address[i] == '.') {
				// replace . with [.]
				address[curIndex--] = ']';
				address[curIndex--] = '.';
				address[curIndex--] = '[';
			}
			else {
				// move the digit to the back
				address[curIndex--] = address[i];
			}
		}

		return address;

	}
};