/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:50 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIDocumentPickerContainerItem.h>

@class NSString, NSArray, NSURL, NSDate, NSNumber;

@interface _UIDocumentPickerContainerMetadataItem : _UIDocumentPickerContainerItem {

	long long _cachedType;
	NSString* _cachedTitle;
	NSString* _cachedSubtitle;
	NSString* _cachedSubtitle2;
	NSArray* _cachedTags;
	NSURL* _cachedURL;
	NSURL* _cachedURLInLocalContainer;
	unsigned long long _cachedIndentation;
	NSString* _cachedSortPath;
	NSString* _cachedContentType;
	NSDate* _cachedContentModifiedDate;
	NSNumber* _cachedFileObjectID;
	BOOL _cachedRenameable;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)url;
-(long long)type;
-(id)title;
-(id)initWithMetadataItem:(id)arg1 ;
-(id)modificationDate;
-(id)contentType;
-(void)cacheValues:(id)arg1 ;
-(void)_removeCachedValues;
-(id)sortPathComponents;
-(id)subtitle;
-(id)subtitle2;
-(id)urlInLocalContainer;
-(id)tags;
-(id)sortDate;
-(void)_modelChanged;
-(unsigned long long)indentationLevel;
-(id)sortPath;
-(BOOL)renameable;
@end

