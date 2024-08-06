struct Rectangle {
    // your code goes here
    // Cac bien thanh vien
    // your code goes here
    int height;
    int length;
    // Hai ham khoi tao
    Rectangle() {
    	height = 0;
    	length = 0;
	}
	Rectangle(int _height, int _length) {
		height = _height;
		length = _length;
	}

    int getPerimeter() {
        // your code goes here
        return (height + length) * 2;
    }
    
    void print() {
        // your code goes here
        for (int i = 0; i < height; i++) {
        	if (i == 0 || i == height-1) {
        		for (int j = 0; j < length; j++) {
        			cout << "*";
				}
				cout << endl;
			} else {
				for (int j = 0; j < length; j++) {
					if (j == 0 || j == length - 1) {
						cout << "*";
					}
        			else cout << " ";
				}
				cout << endl;
			}
		}
    }
};

int compare(Rectangle a, Rectangle b) {
    // your code goes here
    int cva = a.getPerimeter();
    int cvb = b.getPerimeter();
    if (cva < cvb) return -1;
    if (cva == cvb) return 0;
    return 1;
}