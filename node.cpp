


using namespace std;


class Node{



    public:
        Node * nextNode;
        Node * prevNode;

        Node(int i){
            value = i;
            nextNode = NULL;
            prevNode = NULL;
        }
        int getValue(){
            return value;
        }


    
    private:
        int value;
    


};