// 使用前請記得sort!!!
// 尋找是否有val，回傳true或false
cout << binary_search(v.begin(), v.end(), val) << endl;

// 尋找大於等於/大於val的第一個值，回傳此值的iterator
lower_bound(v.begin(), v.end(), val);
upper_bound(v.begin(), v.end(), val);