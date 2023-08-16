import pandas as pd
import os
import torch
from torch.utils.data import Dataset
from skimage import io

import torchvision.transforms as transforms


class CTscanDataset(Dataset):
    def __init__(self, csv_file, root_dir, transform=None):
        self.annotations = pd.read_csv(csv_file)
        self.root_dir = root_dir
        self.transform = transform

    def __len__(self):
        return len(self.annotations)

    def __getitem__(self, index):

        print(type(self.annotations.iloc[0, 2]))
        img_path = os.path.join(self.root_dir, self.annotations.iloc[index, 1])
        image = io.imread(img_path)
        y_label = torch.tensor([int(self.annotations.iloc[index, 2]), int(self.annotations.iloc[index, 3]), int(self.annotations.iloc[index, 4])])

        if self.transform:
            image = self.transform(image)

            # return image, y_label
            return list(image.shape)



if __name__ == "__main__" :
    # print(torch.cuda.is_available())
    ctScan = CTscanDataset("valid_data.csv", "", transforms.ToTensor())
    print(len(ctScan))
    for i in range(len(ctScan)):
        print(ctScan[i][0])



