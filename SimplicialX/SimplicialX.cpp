#include "Header.h"

class SimplicialComplex
{
public:
	SimplicialComplex(bool type = true) {
		if (type) {
			complex = new HasseDiagram;
		}
		else {
			complex = new SimplexTrie;
		}
	}
	~SimplicialComplex() {
		delete complex;
	}
	void insert(vector<int>& word, double weight = 1) {
		complex->insert(word, weight);
	}
	void erase(vector<int>& word) {
		complex->erase(word);
	}
	void changeWeight(vector<int>& word, double weight = 1) {
		complex->changeWeight(word, weight);
	}
	int simplexCount() {
		return complex->simplexCount();
	}
	int eulerNumber() {
		return complex->eulerNumber();
	}
	void fVector() {
		complex->fVector();
	}
	void allSimplices() {
		complex->allSimplices();
	}
	void vertexDegreePQ(int p, int q) {
		complex->vertexDegreePQ(p, q);
	}
	void closeness(int p, int q){
		complex->closeness(p, q);
	}
	void betweenness(int p, int q) {
		complex->betweenness(p, q);
	}
	double clusterCoeff(int p, int q) {
		return complex->clusterCoeff(p, q);
	}
	double distancePQ(vector<int>& a, vector<int>& b, int p, int q) {
		return complex->distansePQ(a, b, p, q);
	}
	mat boundaryMatrix(int k = 1, int p = 1) {
		return complex->boundaryMatrix(k, p);
	}
	mat laplacianMatrix(int k, int p = 1, int q = 1) {
		return laplacianMatrix(k, p, q);
	}
	mat laplacianMatrixWeight(int k, int p = 1, int q = 1) {
		return laplacianMatrixWeight(k, p, q);
	}
	pair <vec, mat> laplacianSpectre(int k, int p = 1, int q = 1, bool weight = false) {
		return complex->laplacianSpectre(k, p, q, weight);
	}
	void openStar(vector<int>& word) {
	    complex->openStar(word);
	}
	void closeStar(vector<int>& word) {
		complex->closeStar(word);
	}
	void link(vector<int>& word) {
		complex->link(word);
	}
	SimpInterface* complex;
};

int main() {
	ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
#ifdef _DEBUG 
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	SimplicialComplex com(false);
	vector<int> word;
	word = { 1,2,3 };
	com.insert(word, 90);
	com.allSimplices();
}