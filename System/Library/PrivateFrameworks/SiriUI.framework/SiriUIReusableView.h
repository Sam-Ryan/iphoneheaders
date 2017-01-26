/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SiriUISnippetViewController;


@protocol SiriUIReusableView <NSObject>
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController; 
@optional
-(UIEdgeInsets*)edgeInsets;
-(SiriUISnippetViewController *)snippetViewController;
-(void)setSnippetViewController:(id)arg1;

@required
+(double)defaultHeight;
+(id)reuseIdentifier;
+(id)elementKind;

@end

