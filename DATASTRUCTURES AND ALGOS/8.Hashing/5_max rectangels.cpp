#include<bits/stdc++.h>
using namespace std;

// as we are using the coordines it is very better to create a Node

struct Point{
	int x;
	int y;
	Point(int x,int y){
		this->x=x;
		this->y=y;
	}
};

class Compare{
	// inorder to arrange the things in the set ,in the order we want
public:
	bool operator()(const Point p1,const Point p2){
		if(p1.x==p2.x){
			return p1.y<p2.y;
		}
		return p1.x<p2.x;
	}
};


int count_rectangles(vector<Point> Points){
	set<Point,Compare>s;
	for (Point p:Points){
		s.insert(p);
	}
	int ans=0;

	for(auto it=s.begin();it!=prev(s.end());it++){
		for (auto jt=next(it);jt!=s.end();jt++){
			Point p1=*it;
			Point p2=*jt;

			if(p2.x==p1.x or p2.y==p1.y){
				continue;
			}

			Point p3(p1.x,p2.y);
			Point p4(p2.x,p1.y);

			if(s.find(p3)!=s.end() and s.find(p4)!=s.end()){
				
				ans+=1;
			}
		}
	}
	return ans/2;
}


	for(int i=0;i<N;i++){
	
		cin>>x>>y;
		Point p(x,y);
		points.push_back(p);
	}
	cout<<count_rectangles(points);


	return 0;
}

