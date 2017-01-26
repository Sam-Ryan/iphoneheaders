/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/ServerDocuments.app/Frameworks/ServerDocsClient.framework/ServerDocsClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ServerDocsClient/ServerDocsClient-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface SVCollectionViewGridLayout : UICollectionViewFlowLayout {

	BOOL _showsDetailLabel;
	BOOL _showsHeader;

}

@property (assign,nonatomic) BOOL showsDetailLabel;              //@synthesize showsDetailLabel=_showsDetailLabel - In the implementation block
@property (assign,nonatomic) BOOL showsHeader;                   //@synthesize showsHeader=_showsHeader - In the implementation block
+(id)nameLabelFont;
+(id)detailLabelFont;
+(double)nameLabelHeight;
+(double)detailLabelHeight;
+(BOOL)regularLayoutForTraits:(id)arg1 ;
+(CGSize)defaultSizeForTraits:(id)arg1 showsDetailLabel:(BOOL)arg2 ;
+(CGSize)thumbnailSizeForTraits:(id)arg1 ;
-(void)setShowsDetailLabel:(BOOL)arg1 ;
-(void)setShowsHeader:(BOOL)arg1 ;
-(BOOL)showsHeader;
-(BOOL)showsDetailLabel;
-(id)init;
-(void)prepareLayout;
@end
