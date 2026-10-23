
struct Node {
    string data;
    Node* back;
    Node* next;
};
class BrowserHistory {
public:
    Node* currentpage;
    BrowserHistory(string homepage) { currentpage = new Node(homepage); }

    void visit(string url) {
        Node* newNode = new Node(url);
        currentpage->next = newNode;
        newNode->back = currentpage;
        currentpage = newNode;
    }

    string back(int steps) {

        while (steps) {
            if (currentpage->back) {
                currentpage = currentpage->back;
            } else {
                break;
            }
            steps--;
        }
        return currentpage->data;
    }

    string forward(int steps) {
        while (steps) {
            if (currentpage->next) {
                currentpage = currentpage->next;
            } else {
                break;
            }
            steps--;
        }
        return currentpage->data;
    }
};

