
template <typename T>

class CacheList{
	struct Node{
	};

	
public:
	class const_iterator{
	public:
		const_iterator(){}
		const_iterator operator++(){}
		const_iterator operator++(int){}
		const_iterator operator--(){}
		const_iterator operator--(int){}
		bool operator==(const_iterator rhs){}
		bool operator!=(const_iterator rhs){}
		const T& operator*()const{}
	};
	class iterator:public const_iterator{
	public:
		iterator(){}
		iterator operator++(){}
		iterator operator++(int){}
		iterator operator--(){}
		iterator operator--(int){}
		T& operator*(){}
		const T& operator*()const{}
	};
	CacheList();
	~CacheList();
	CacheList(const CacheList& rhs);
	CacheList& operator=(const CacheList& rhs);
	CacheList(CacheList&& rhs);
	CacheList& operator=(CacheList&& rhs);
	iterator begin();
	iterator end();
	const_iterator cbegin() const;
	const_iterator cend() const;
	iterator insert(const T& data);
	iterator search(const T& data);
	iterator erase(iterator it);

	bool empty() const;
	int size() const;
};

template <typename T>
CacheList<T>::CacheList(){

}
template <typename T>
CacheList<T>::~CacheList(){

}
template <typename T>
CacheList<T>::CacheList(const CacheList& rhs){

}
template <typename T>
CacheList<T>& CacheList<T>::operator=(const CacheList& rhs){

}
template <typename T>
CacheList<T>::CacheList(CacheList&& rhs){

}

template <typename T>
CacheList<T>& CacheList<T>::operator=(CacheList&& rhs){

}


template <typename T>
typename CacheList<T>::iterator CacheList<T>::begin(){

}
template <typename T>
typename CacheList<T>::iterator CacheList<T>::end(){
}

template <typename T>
typename CacheList<T>::const_iterator CacheList<T>::cbegin() const{

}
template <typename T>
typename CacheList<T>::const_iterator CacheList<T>::cend() const{

}

template <typename T>
typename CacheList<T>::iterator CacheList<T>::insert(const T& data){

}

template <typename T>
typename CacheList<T>::iterator CacheList<T>::search(const T& data){

}

template <typename T>
typename CacheList<T>::iterator CacheList<T>::erase(iterator it){

}


template <typename T>
bool CacheList<T>::empty() const{

}
template <typename T>
int CacheList<T>::size() const{

}
