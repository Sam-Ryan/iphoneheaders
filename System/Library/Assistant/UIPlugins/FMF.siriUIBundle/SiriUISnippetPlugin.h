/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriUISnippetPlugin <NSObject>
@optional
-(void)setOrientationDelegate:(id)arg1;
-(id)viewControllerForSnippet:(id)arg1;
-(BOOL)listItem:(id)arg1 isEqualToListItem:(id)arg2;
-(BOOL)listItem:(id)arg1 isPreferredOverListItem:(id)arg2;
-(id)viewControllerForSnippet:(id)arg1 error:(id*)arg2;
-(id)viewControllerForAceObject:(id)arg1;
-(id)disambiguationItemForListItem:(id)arg1 disambiguationKey:(id)arg2;
-(id)speakableNamespaceProviderForAceObject:(id)arg1;

@end

