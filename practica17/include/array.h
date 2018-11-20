#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>

using namespace std;
template<typename T>
class array
{
    public:
        array(){
            sizee = 0;
            arr = new T[sizee];
        }

        array(const T pts[],const int si){
            sizee = si;
            arr = new T[sizee];
            for(int i = 0;i < sizee; i++)
            arr[i]=pts[i];
        }

        array(const array<T> &o){
        sizee = o.sizee;
        arr = new T[sizee];
        for(int i = 0;i < sizee; i++)
        arr[i]=o.arr[i];
        }

        ~array(){ delete[] arr;}
        void clear(){
            resize(0);
        }

        int getSize()const{return sizee ;}

        void push_back(const T &p){
            resize(sizee + 1);
            arr[sizee - 1] = p;
        }

        void insert(const int posi, const T &p){
            resize(sizee + 1);
            for(int i = sizee-1;i > posi;i--)
            arr [i] = arr [i -1];
            arr[posi] = p;
        }

        void remove(const int posi){
            if( posi >= 0 && posi < sizee ) {
                for(int i = posi; i < sizee - 2; i++) {
                    arr[i] = arr[i + 1];
                    }
                resize(sizee - 1);
                }
            }

        void print(){
            for(int i=0;i < sizee;i++){
                arr[i].habla();
                if(i ==sizee-1)
            cout << " ";
            else
            cout << " , ";
          }
        }


//protected:

    private:
        T *arr;
        int sizee;
        void resize(int newsize){
            T *pts = new T[newsize];
            int minSize = ( newsize > sizee ? sizee : newsize );
            for (int i = 0; i < minSize ; i++)
                pts[i] = arr [i];
            delete [] arr;
            sizee = newsize;
            arr = pts;
        }
};

#endif // ANIMALARRAY_H
