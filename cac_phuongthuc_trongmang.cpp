//ptmax 
void mang1c::nhap(){
	int n , x[0]; 
	cout<<"nhap n: ";cin>>n;
	for(int i = 0 ; i< n ; i++){
		cout<<"a["<<i<<"]";cin>>x[i];
	}
}
int mang1c::ptmax(){
	int i , max = 0;
	for(i =  0 ; i <n ; i ++)
	if(max < x[i])
	max = x[i];
	cout<<max<<endl;
	return max;
}
void mang1c::sapxep(){
	int i , j , tg = 0;
	for(i = 0 ; i < n ; i++)
	for(j = i+1 ; j<n ; j++)
	if(j[i] < x[i]){
	tg = i[i];
	i[i]  = j[i];
	j[i]  = tg;
}
	cout<<"mang sau khi sap xep : "<<tg<<endl;
}
int mang1c::tongchan(){
	int i , tc;
	for(i = 0 ; i < n ; i++)
	if(x[i] % 2 == 0)
	tc = tc + x[i];
	cout<<tc<<endl;
	return tc;	
}
int mang1c::ptule(){
	int i , count = 0;
	for(i = 0 ; i < n ; i++)
	if(x[i] %2 != 0)
	count++;
	cout << "cac phan tu le: "<<count<<endl;
	return 0;
}











