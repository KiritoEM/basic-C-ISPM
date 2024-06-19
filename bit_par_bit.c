#include <stdio.h>

#define AGE_MASK 0x7F  // Masque pour les 7 bits de l'âge (0x7F = 0111 1111 en binaire)
#define SEXE_MASK 0x80 // Masque pour le bit de sexe (0x80 = 1000 0000 en binaire)

int pack_age_and_sex(int age, int sex)
{
    return (age & AGE_MASK) | (sex << 7);
}

int unpack_age(int packed)
{
    return packed & AGE_MASK;
}

int unpack_sexe(int packed)
{
    return (packed & SEXE_MASK) >> 7; // Décaler à droite pour obtenir le bit de sexe
}

int main()
{
    int age = 25;
    int sexe = 1;

    int data = pack_age_and_sex(age, sexe);

    int extracted_age = unpack_age(data);
    int extracted_sexe = unpack_sexe(data);

    printf("Âge extrait: %d\n", extracted_age);
    printf("Sexe extrait: %d\n", extracted_sexe);

    return 0;
}
