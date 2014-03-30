//
//  DetailViewController.h
//  mrMico
//
//  Created by Elton Oliveira on 29/03/14.
//  Copyright (c) 2014 Elton Oliveira. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
