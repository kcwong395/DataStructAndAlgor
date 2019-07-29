class Solution {
public:
	string defangIPaddr(string address) {

		int preIndex = address.length() - 1;
		address += "      ";
		int curIndex = address.length() - 1;

		for (int i = preIndex; i >= 0; i--) {
			if (address[i] == '.') {
				address[curIndex--] = ']';
				address[curIndex--] = '.';
				address[curIndex--] = '[';
			}
			else {
				address[curIndex--] = address[i];
			}
		}

		return address;

	}
};