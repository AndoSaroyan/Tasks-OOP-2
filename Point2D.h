class Point2D {
    public:
   Point2D(){x=0;y=0;}
   Point2D(int a,int b){x=a;y=b;}
   Point2D(const Point2D &oth){this->x=oth.x;this->y=oth.y;}
   Point2D operator+(const Point2D& obj)
   {
    Point2D obj2;
    obj2.x=x+obj.x;
   obj2.y=y+obj.y;
   return obj2;}

   Point2D operator * (const Point2D &obj2)
   {Point2D obj;
    obj.x=x*obj2.x;
   obj.y=y*obj2.y;
   return obj;}
   Point2D operator- (const Point2D &obj2)
   {Point2D obj;
   obj.x=x-obj2.x;
   obj.y=y-obj2.y;
   return obj;}
   Point2D operator /(const Point2D &obj2)
   {Point2D obj;
    obj.x=x/obj2.x;
   obj.y=y/obj2.y;
   return obj;}

   void set_x();
   void set_y();
   int get_x ();
   int get_y();

    private: 
    int x;
    int y;
};


void  Point2D::set_x(){
    int a;
    std::cin>>a;
    x=a;
} 

void Point2D::set_y(){
    int n;
    std::cin>>n;
    y=n;
}

int Point2D::get_x(){
    return x;
}

int Point2D::get_y(){
    return y;
}
