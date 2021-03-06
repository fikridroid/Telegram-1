/*
 * This is the source code of Telegram for iOS v. 1.1
 * It is licensed under GNU GPL v. 2 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Peter Iakovlev, 2013.
 */

#import "TGPreparedMessage.h"

@interface TGPreparedLocalImageMessage : TGPreparedMessage

@property (nonatomic) CGSize imageSize;
@property (nonatomic) CGSize thumbnailSize;
@property (nonatomic, strong) NSString *assetUrl;

@property (nonatomic, strong) NSString *localImageDataPath;
@property (nonatomic, strong) NSString *localThumbnailDataPath;

@property (nonatomic, strong) NSString *caption;

@property (nonatomic, strong) TGMessage *replyMessage;

+ (instancetype)messageWithImageData:(NSData *)imageData imageSize:(CGSize)imageSize thumbnailData:(NSData *)thumbnailData thumbnailSize:(CGSize)thumbnailSize assetUrl:(NSString *)assetUrl caption:(NSString *)caption replyMessage:(TGMessage *)replyMessage;
+ (instancetype)messageWithLocalImageDataPath:(NSString *)localImageDataPath imageSize:(CGSize)imageSize localThumbnailDataPath:(NSString *)localThumbnailDataPath thumbnailSize:(CGSize)thumbnailSize assetUrl:(NSString *)assetUrl caption:(NSString *)caption replyMessage:(TGMessage *)replyMessage;
+ (instancetype)messageByCopyingMessageData:(TGPreparedLocalImageMessage *)source;

@end
