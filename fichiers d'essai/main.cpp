#include <iostream>

// ==========================================
// DEBUT DU FICHIER : ZONE DE MODIFICATION A
// ==========================================
void afficherEntete() {
    std::cout << "=== Application C++ Demonstration Git ===" << std::endl;
}

void traiterDonnees() {
    std::cout << "Traitement des donnees en cours..." << std::endl;
}

void afficherStatistiques() {
    std::cout << "Statistiques : 100% OK" << std::endl;
}

// ==========================================
// FIN DU FICHIER : ZONE DE MODIFICATION B
// ==========================================
void afficherPiedDePage() {
    std::cout << "=== Fin du programme ===" << std::endl;
}

int main() {
    afficherEntete();
    traiterDonnees();
    afficherStatistiques();
    afficherPiedDePage();
    return 0;
}
