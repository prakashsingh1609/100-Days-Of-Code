class ParkingSystem {
public:
    int a=0,b=0,c=0;
ParkingSystem(int big, int medium, int small) {        
    a=big;
    b=medium;
   c= small;  }

bool addCar(int carType) {
    bool status=false;
    if(carType==1)
    {
        if(a>0)
        {
            a=a-1;
            status= true;
        }
                   
        
    }
    if(carType==2)
    {
        if(b>0)
        {
            b=b-1;
            status= true;
        }
    }
    if(carType==3)
    {
       if(c>0)
        {
            c=c-1;
            status= true;
        }
    }
    return status;
    
}
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */