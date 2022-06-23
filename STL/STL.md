# STL

## vector

### 创建

```cpp
vector<int> a; vector<char> aa; vector<long long> aaa;
vector<int> b(5, 10);
int m = 5;
vector<int> bb(m, 5);
vector<int> g[10];
vector<vector<int>> c(10, vector<int>(10, 10));
```

### 常用函数

```cpp
vector<int> a;
a.push_back(); //插入一个数
a.emplace_back(); //插入一个数，据说比push_back快点
a.clear(); //清除所有元素
a.pop_back(); //删除最后一个元素
a.size(); //返回a中所含元素的数量
a.empty(); //布尔类型，表示a是否非空
a.front(); //第一个元素的值
a.back(); //最后一个元素的值
sort(a.begin(), a.end()); //升序排序
sort(a.begin(), a.end(), greater<>()); //降序排序

bool cmp()
sort(a.begin(), a.end(), cmp); //自定义排序
```

## queue



