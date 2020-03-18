#include <vector>
#include <queue>
using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        vector<int> path;
        queue<pair<TreeNode*, vector<int>>> que;
        que.push(make_pair(original, path));

        while (true){
            auto current = que.front();que.pop();
            TreeNode* current_node = current.first;
            vector<int> current_path = current.second;
            if (current_node->val == target->val) {
                path = current_path;
                break;
            }

            current_path.push_back(0);
            if (current_node->left)
                que.push(make_pair(current_node->left, current_path));

            current_path[current_path.size()-1] = 1;
            if (current_node->right)
                que.push(make_pair(current_node->right, current_path));
        }

        for (int i=0; i<path.size(); ++i) {
            if (path[i]==0) cloned = cloned->left;
            else cloned = cloned->right;
        }

        return cloned;
    }
};