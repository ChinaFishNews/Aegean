//
//  AGNAlbum.h
//  Aegean
//
//  Created by 李凌峰 on 1/9/16.
//  Copyright © 2016 SoulBeats. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <UIKit/UIKit.h>

@interface AGNAlbum : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) ALAssetsGroupType type;
@property (nonatomic, strong) NSMutableArray *assets;

- (void)loadAspectRatioThumbnailsAsynchronously;
- (UIImage *)fullResolutionImageAtIndex:(NSUInteger)index;
- (UIImage *)aspectRatioThumbnailAtIndex:(NSUInteger)index;
@end
