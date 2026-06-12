# Auto-Clothes-Retractor V2
**Projet CSC 2027 - Détection pluie + Servomoteur**

### 🎯 Description
Système automatique qui rentre le linge dès que la pluie est détectée. 
Utilise capteur YL-69 + Servo SG90 + Arduino Uno.

### 🔧 Matériel utilisé
- Arduino Uno R3
- Capteur pluie YL-69 + module 
- Servomoteur SG90 180°
- Fils Dupont + Alimentation 5V

### ⚡ Fonctionnement
1. Capteur mesure humidité sur pin A0
2. Si valeur < 400 → Pluie détectée 
3. Servo tourne 180° pour enrouler le fil
4. Temps sec → Servo retourne à 0°

### 📁 Fichiers
- `auto_clothes.ino` : Code Arduino complet
- `schema_montage.jpg` : À ajouter après montage

### 👨‍💻 Auteur
Roland13-ai - CSC 2027 Bénin
