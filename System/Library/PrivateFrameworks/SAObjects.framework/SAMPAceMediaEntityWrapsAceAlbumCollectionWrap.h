/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPAlbumCollection.h>
#import <SAObjects/SASyncWrap.h>

@class NSNumber, NSString, NSURL;

@interface SAMPAceMediaEntityWrapsAceAlbumCollectionWrap : SAMPAlbumCollection <SASyncWrap>

@property (nonatomic,copy) NSNumber * generation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSURL * identifier; 
+(id)aceMediaEntityWrapsAceAlbumCollectionWrap;
+(id)aceMediaEntityWrapsAceAlbumCollectionWrapWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setGeneration:(NSNumber *)arg1 ;
-(NSNumber *)generation;
-(id)encodedClassName;
@end

