//
//  AGNPageViewController.h
//  Aegean
//
//  Created by LingFeng-Li on 1/13/16.
//  Copyright © 2016 SoulBeats. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AGNAlbum.h"

@interface AGNPageViewController : UIPageViewController
@property (nonatomic, strong) AGNAlbum *album;
@property (nonatomic, strong) NSMutableArray *selectedPhotosIndexes;
@property (nonatomic, assign) NSUInteger startingIndex;
@end
