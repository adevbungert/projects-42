# -*- coding: utf-8 -*-
# Generated by Django 1.9 on 2015-12-31 09:09
from __future__ import unicode_literals

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('vav', '0004_auto_20151231_0958'),
    ]

    operations = [
        migrations.AddField(
            model_name='voiture',
            name='date_vente',
            field=models.DateTimeField(blank=True, null=True),
        ),
    ]
