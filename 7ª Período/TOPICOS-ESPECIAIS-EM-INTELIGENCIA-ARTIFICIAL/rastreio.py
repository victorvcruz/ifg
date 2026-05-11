# =============================================================
# CLASSIFICAÇÃO DE IMAGENS COM RESNET50
# =============================================================

# CÉLULA 1 – Instalar e Importar Bibliotecas
# !pip install tensorflow
import tensorflow as tf
from tensorflow.keras.applications.resnet50 import ResNet50, preprocess_input, decode_predictions
from tensorflow.keras.preprocessing import image
import numpy as np
import matplotlib.pyplot as plt

print(f"TensorFlow version: {tf.__version__}")

# CÉLULA 2 – Carregar o Modelo ResNet50 Pré-treinado
model = ResNet50(weights='imagenet')
model.summary()

# CÉLULA 3 – Obter Caminho da Imagem
import sys
import os

if len(sys.argv) > 1:
    img_path = sys.argv[1]
else:
    img_path = 'imagem.jpg' # Imagem padrão

if not os.path.exists(img_path):
    print(f"Erro: Imagem '{img_path}' não encontrada. Passe o caminho como argumento: python rastreio.py <imagem.jpg>")
    sys.exit(1)
    
print(f'Usando a imagem: {img_path}')

# CÉLULA 4 – Processar e Exibir a Imagem
def load_and_preprocess_image(img_path):
    img = image.load_img(img_path, target_size=(224, 224))
    img_array = image.img_to_array(img)
    original_img = img_array.copy()
    img_array = np.expand_dims(img_array, axis=0)
    img_array = preprocess_input(img_array)
    return img_array, original_img

if 'img_path' in locals() and img_path:
    processed_image, original_image = load_and_preprocess_image(img_path)
    print(f'Shape of processed image: {processed_image.shape}')
    plt.imshow(original_image.astype(np.uint8))
    plt.axis('off')
    plt.show()
else:
    print('Nenhuma imagem foi carregada.')

# CÉLULA 5 – Classificar a Imagem
if 'model' in locals() and 'processed_image' in locals():
    predictions = model.predict(processed_image)
    decoded_predictions = decode_predictions(predictions, top=1)[0]

    print("Previsão:")
    for i, (imagenet_id, label, score) in enumerate(decoded_predictions):
        print(f"{i + 1}: {label} ({score * 100:.1f})%")

    cat_labels = [
        'tabby', 'tiger_cat', 'persian_cat', 'siamese_cat', 'egyptian_cat',
        'lynx', 'leopard', 'jaguar', 'cheetah', 'lion', 'tiger',
        'snow_leopard', 'cougar', 'cat', 'domestic_cat'
    ]

    is_cat = False
    for _, label, _ in decoded_predictions:
        if label.lower() in cat_labels:
            is_cat = True
            break

    if is_cat:
        print("É um gato!")
    else:
        print("Não é um gato!")
else:
    print("Modelo ou imagem não disponíveis")
