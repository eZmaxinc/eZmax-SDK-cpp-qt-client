/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Branding_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Branding_RequestCompound::Branding_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Branding_RequestCompound::Branding_RequestCompound() {
    this->initializeModel();
}

Branding_RequestCompound::~Branding_RequestCompound() {}

void Branding_RequestCompound::initializeModel() {

    m_pki_branding_id_isSet = false;
    m_pki_branding_id_isValid = false;

    m_obj_branding_description_isSet = false;
    m_obj_branding_description_isValid = false;

    m_e_branding_logo_isSet = false;
    m_e_branding_logo_isValid = false;

    m_s_branding_base64_isSet = false;
    m_s_branding_base64_isValid = false;

    m_e_branding_logointerface_isSet = false;
    m_e_branding_logointerface_isValid = false;

    m_s_branding_logointerface_base64_isSet = false;
    m_s_branding_logointerface_base64_isValid = false;

    m_i_branding_colortext_isSet = false;
    m_i_branding_colortext_isValid = false;

    m_i_branding_colortextlinkbox_isSet = false;
    m_i_branding_colortextlinkbox_isValid = false;

    m_i_branding_colortextbutton_isSet = false;
    m_i_branding_colortextbutton_isValid = false;

    m_i_branding_colorbackground_isSet = false;
    m_i_branding_colorbackground_isValid = false;

    m_i_branding_colorbackgroundbutton_isSet = false;
    m_i_branding_colorbackgroundbutton_isValid = false;

    m_i_branding_colorbackgroundsmallbox_isSet = false;
    m_i_branding_colorbackgroundsmallbox_isValid = false;

    m_i_branding_interfacecolor_isSet = false;
    m_i_branding_interfacecolor_isValid = false;

    m_s_branding_name_isSet = false;
    m_s_branding_name_isValid = false;

    m_s_email_address_isSet = false;
    m_s_email_address_isValid = false;

    m_b_branding_isactive_isSet = false;
    m_b_branding_isactive_isValid = false;
}

void Branding_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Branding_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_branding_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_branding_id, json[QString("pkiBrandingID")]);
    m_pki_branding_id_isSet = !json[QString("pkiBrandingID")].isNull() && m_pki_branding_id_isValid;

    m_obj_branding_description_isValid = ::Ezmaxapi::fromJsonValue(m_obj_branding_description, json[QString("objBrandingDescription")]);
    m_obj_branding_description_isSet = !json[QString("objBrandingDescription")].isNull() && m_obj_branding_description_isValid;

    m_e_branding_logo_isValid = ::Ezmaxapi::fromJsonValue(m_e_branding_logo, json[QString("eBrandingLogo")]);
    m_e_branding_logo_isSet = !json[QString("eBrandingLogo")].isNull() && m_e_branding_logo_isValid;

    m_s_branding_base64_isValid = ::Ezmaxapi::fromJsonValue(m_s_branding_base64, json[QString("sBrandingBase64")]);
    m_s_branding_base64_isSet = !json[QString("sBrandingBase64")].isNull() && m_s_branding_base64_isValid;

    m_e_branding_logointerface_isValid = ::Ezmaxapi::fromJsonValue(m_e_branding_logointerface, json[QString("eBrandingLogointerface")]);
    m_e_branding_logointerface_isSet = !json[QString("eBrandingLogointerface")].isNull() && m_e_branding_logointerface_isValid;

    m_s_branding_logointerface_base64_isValid = ::Ezmaxapi::fromJsonValue(m_s_branding_logointerface_base64, json[QString("sBrandingLogointerfaceBase64")]);
    m_s_branding_logointerface_base64_isSet = !json[QString("sBrandingLogointerfaceBase64")].isNull() && m_s_branding_logointerface_base64_isValid;

    m_i_branding_colortext_isValid = ::Ezmaxapi::fromJsonValue(m_i_branding_colortext, json[QString("iBrandingColortext")]);
    m_i_branding_colortext_isSet = !json[QString("iBrandingColortext")].isNull() && m_i_branding_colortext_isValid;

    m_i_branding_colortextlinkbox_isValid = ::Ezmaxapi::fromJsonValue(m_i_branding_colortextlinkbox, json[QString("iBrandingColortextlinkbox")]);
    m_i_branding_colortextlinkbox_isSet = !json[QString("iBrandingColortextlinkbox")].isNull() && m_i_branding_colortextlinkbox_isValid;

    m_i_branding_colortextbutton_isValid = ::Ezmaxapi::fromJsonValue(m_i_branding_colortextbutton, json[QString("iBrandingColortextbutton")]);
    m_i_branding_colortextbutton_isSet = !json[QString("iBrandingColortextbutton")].isNull() && m_i_branding_colortextbutton_isValid;

    m_i_branding_colorbackground_isValid = ::Ezmaxapi::fromJsonValue(m_i_branding_colorbackground, json[QString("iBrandingColorbackground")]);
    m_i_branding_colorbackground_isSet = !json[QString("iBrandingColorbackground")].isNull() && m_i_branding_colorbackground_isValid;

    m_i_branding_colorbackgroundbutton_isValid = ::Ezmaxapi::fromJsonValue(m_i_branding_colorbackgroundbutton, json[QString("iBrandingColorbackgroundbutton")]);
    m_i_branding_colorbackgroundbutton_isSet = !json[QString("iBrandingColorbackgroundbutton")].isNull() && m_i_branding_colorbackgroundbutton_isValid;

    m_i_branding_colorbackgroundsmallbox_isValid = ::Ezmaxapi::fromJsonValue(m_i_branding_colorbackgroundsmallbox, json[QString("iBrandingColorbackgroundsmallbox")]);
    m_i_branding_colorbackgroundsmallbox_isSet = !json[QString("iBrandingColorbackgroundsmallbox")].isNull() && m_i_branding_colorbackgroundsmallbox_isValid;

    m_i_branding_interfacecolor_isValid = ::Ezmaxapi::fromJsonValue(m_i_branding_interfacecolor, json[QString("iBrandingInterfacecolor")]);
    m_i_branding_interfacecolor_isSet = !json[QString("iBrandingInterfacecolor")].isNull() && m_i_branding_interfacecolor_isValid;

    m_s_branding_name_isValid = ::Ezmaxapi::fromJsonValue(m_s_branding_name, json[QString("sBrandingName")]);
    m_s_branding_name_isSet = !json[QString("sBrandingName")].isNull() && m_s_branding_name_isValid;

    m_s_email_address_isValid = ::Ezmaxapi::fromJsonValue(m_s_email_address, json[QString("sEmailAddress")]);
    m_s_email_address_isSet = !json[QString("sEmailAddress")].isNull() && m_s_email_address_isValid;

    m_b_branding_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_branding_isactive, json[QString("bBrandingIsactive")]);
    m_b_branding_isactive_isSet = !json[QString("bBrandingIsactive")].isNull() && m_b_branding_isactive_isValid;
}

QString Branding_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Branding_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_branding_id_isSet) {
        obj.insert(QString("pkiBrandingID"), ::Ezmaxapi::toJsonValue(m_pki_branding_id));
    }
    if (m_obj_branding_description.isSet()) {
        obj.insert(QString("objBrandingDescription"), ::Ezmaxapi::toJsonValue(m_obj_branding_description));
    }
    if (m_e_branding_logo.isSet()) {
        obj.insert(QString("eBrandingLogo"), ::Ezmaxapi::toJsonValue(m_e_branding_logo));
    }
    if (m_s_branding_base64_isSet) {
        obj.insert(QString("sBrandingBase64"), ::Ezmaxapi::toJsonValue(m_s_branding_base64));
    }
    if (m_e_branding_logointerface.isSet()) {
        obj.insert(QString("eBrandingLogointerface"), ::Ezmaxapi::toJsonValue(m_e_branding_logointerface));
    }
    if (m_s_branding_logointerface_base64_isSet) {
        obj.insert(QString("sBrandingLogointerfaceBase64"), ::Ezmaxapi::toJsonValue(m_s_branding_logointerface_base64));
    }
    if (m_i_branding_colortext_isSet) {
        obj.insert(QString("iBrandingColortext"), ::Ezmaxapi::toJsonValue(m_i_branding_colortext));
    }
    if (m_i_branding_colortextlinkbox_isSet) {
        obj.insert(QString("iBrandingColortextlinkbox"), ::Ezmaxapi::toJsonValue(m_i_branding_colortextlinkbox));
    }
    if (m_i_branding_colortextbutton_isSet) {
        obj.insert(QString("iBrandingColortextbutton"), ::Ezmaxapi::toJsonValue(m_i_branding_colortextbutton));
    }
    if (m_i_branding_colorbackground_isSet) {
        obj.insert(QString("iBrandingColorbackground"), ::Ezmaxapi::toJsonValue(m_i_branding_colorbackground));
    }
    if (m_i_branding_colorbackgroundbutton_isSet) {
        obj.insert(QString("iBrandingColorbackgroundbutton"), ::Ezmaxapi::toJsonValue(m_i_branding_colorbackgroundbutton));
    }
    if (m_i_branding_colorbackgroundsmallbox_isSet) {
        obj.insert(QString("iBrandingColorbackgroundsmallbox"), ::Ezmaxapi::toJsonValue(m_i_branding_colorbackgroundsmallbox));
    }
    if (m_i_branding_interfacecolor_isSet) {
        obj.insert(QString("iBrandingInterfacecolor"), ::Ezmaxapi::toJsonValue(m_i_branding_interfacecolor));
    }
    if (m_s_branding_name_isSet) {
        obj.insert(QString("sBrandingName"), ::Ezmaxapi::toJsonValue(m_s_branding_name));
    }
    if (m_s_email_address_isSet) {
        obj.insert(QString("sEmailAddress"), ::Ezmaxapi::toJsonValue(m_s_email_address));
    }
    if (m_b_branding_isactive_isSet) {
        obj.insert(QString("bBrandingIsactive"), ::Ezmaxapi::toJsonValue(m_b_branding_isactive));
    }
    return obj;
}

qint32 Branding_RequestCompound::getPkiBrandingId() const {
    return m_pki_branding_id;
}
void Branding_RequestCompound::setPkiBrandingId(const qint32 &pki_branding_id) {
    m_pki_branding_id = pki_branding_id;
    m_pki_branding_id_isSet = true;
}

bool Branding_RequestCompound::is_pki_branding_id_Set() const{
    return m_pki_branding_id_isSet;
}

bool Branding_RequestCompound::is_pki_branding_id_Valid() const{
    return m_pki_branding_id_isValid;
}

Multilingual_BrandingDescription Branding_RequestCompound::getObjBrandingDescription() const {
    return m_obj_branding_description;
}
void Branding_RequestCompound::setObjBrandingDescription(const Multilingual_BrandingDescription &obj_branding_description) {
    m_obj_branding_description = obj_branding_description;
    m_obj_branding_description_isSet = true;
}

bool Branding_RequestCompound::is_obj_branding_description_Set() const{
    return m_obj_branding_description_isSet;
}

bool Branding_RequestCompound::is_obj_branding_description_Valid() const{
    return m_obj_branding_description_isValid;
}

Field_eBrandingLogo Branding_RequestCompound::getEBrandingLogo() const {
    return m_e_branding_logo;
}
void Branding_RequestCompound::setEBrandingLogo(const Field_eBrandingLogo &e_branding_logo) {
    m_e_branding_logo = e_branding_logo;
    m_e_branding_logo_isSet = true;
}

bool Branding_RequestCompound::is_e_branding_logo_Set() const{
    return m_e_branding_logo_isSet;
}

bool Branding_RequestCompound::is_e_branding_logo_Valid() const{
    return m_e_branding_logo_isValid;
}

QByteArray Branding_RequestCompound::getSBrandingBase64() const {
    return m_s_branding_base64;
}
void Branding_RequestCompound::setSBrandingBase64(const QByteArray &s_branding_base64) {
    m_s_branding_base64 = s_branding_base64;
    m_s_branding_base64_isSet = true;
}

bool Branding_RequestCompound::is_s_branding_base64_Set() const{
    return m_s_branding_base64_isSet;
}

bool Branding_RequestCompound::is_s_branding_base64_Valid() const{
    return m_s_branding_base64_isValid;
}

Field_eBrandingLogointerface Branding_RequestCompound::getEBrandingLogointerface() const {
    return m_e_branding_logointerface;
}
void Branding_RequestCompound::setEBrandingLogointerface(const Field_eBrandingLogointerface &e_branding_logointerface) {
    m_e_branding_logointerface = e_branding_logointerface;
    m_e_branding_logointerface_isSet = true;
}

bool Branding_RequestCompound::is_e_branding_logointerface_Set() const{
    return m_e_branding_logointerface_isSet;
}

bool Branding_RequestCompound::is_e_branding_logointerface_Valid() const{
    return m_e_branding_logointerface_isValid;
}

QByteArray Branding_RequestCompound::getSBrandingLogointerfaceBase64() const {
    return m_s_branding_logointerface_base64;
}
void Branding_RequestCompound::setSBrandingLogointerfaceBase64(const QByteArray &s_branding_logointerface_base64) {
    m_s_branding_logointerface_base64 = s_branding_logointerface_base64;
    m_s_branding_logointerface_base64_isSet = true;
}

bool Branding_RequestCompound::is_s_branding_logointerface_base64_Set() const{
    return m_s_branding_logointerface_base64_isSet;
}

bool Branding_RequestCompound::is_s_branding_logointerface_base64_Valid() const{
    return m_s_branding_logointerface_base64_isValid;
}

qint32 Branding_RequestCompound::getIBrandingColortext() const {
    return m_i_branding_colortext;
}
void Branding_RequestCompound::setIBrandingColortext(const qint32 &i_branding_colortext) {
    m_i_branding_colortext = i_branding_colortext;
    m_i_branding_colortext_isSet = true;
}

bool Branding_RequestCompound::is_i_branding_colortext_Set() const{
    return m_i_branding_colortext_isSet;
}

bool Branding_RequestCompound::is_i_branding_colortext_Valid() const{
    return m_i_branding_colortext_isValid;
}

qint32 Branding_RequestCompound::getIBrandingColortextlinkbox() const {
    return m_i_branding_colortextlinkbox;
}
void Branding_RequestCompound::setIBrandingColortextlinkbox(const qint32 &i_branding_colortextlinkbox) {
    m_i_branding_colortextlinkbox = i_branding_colortextlinkbox;
    m_i_branding_colortextlinkbox_isSet = true;
}

bool Branding_RequestCompound::is_i_branding_colortextlinkbox_Set() const{
    return m_i_branding_colortextlinkbox_isSet;
}

bool Branding_RequestCompound::is_i_branding_colortextlinkbox_Valid() const{
    return m_i_branding_colortextlinkbox_isValid;
}

qint32 Branding_RequestCompound::getIBrandingColortextbutton() const {
    return m_i_branding_colortextbutton;
}
void Branding_RequestCompound::setIBrandingColortextbutton(const qint32 &i_branding_colortextbutton) {
    m_i_branding_colortextbutton = i_branding_colortextbutton;
    m_i_branding_colortextbutton_isSet = true;
}

bool Branding_RequestCompound::is_i_branding_colortextbutton_Set() const{
    return m_i_branding_colortextbutton_isSet;
}

bool Branding_RequestCompound::is_i_branding_colortextbutton_Valid() const{
    return m_i_branding_colortextbutton_isValid;
}

qint32 Branding_RequestCompound::getIBrandingColorbackground() const {
    return m_i_branding_colorbackground;
}
void Branding_RequestCompound::setIBrandingColorbackground(const qint32 &i_branding_colorbackground) {
    m_i_branding_colorbackground = i_branding_colorbackground;
    m_i_branding_colorbackground_isSet = true;
}

bool Branding_RequestCompound::is_i_branding_colorbackground_Set() const{
    return m_i_branding_colorbackground_isSet;
}

bool Branding_RequestCompound::is_i_branding_colorbackground_Valid() const{
    return m_i_branding_colorbackground_isValid;
}

qint32 Branding_RequestCompound::getIBrandingColorbackgroundbutton() const {
    return m_i_branding_colorbackgroundbutton;
}
void Branding_RequestCompound::setIBrandingColorbackgroundbutton(const qint32 &i_branding_colorbackgroundbutton) {
    m_i_branding_colorbackgroundbutton = i_branding_colorbackgroundbutton;
    m_i_branding_colorbackgroundbutton_isSet = true;
}

bool Branding_RequestCompound::is_i_branding_colorbackgroundbutton_Set() const{
    return m_i_branding_colorbackgroundbutton_isSet;
}

bool Branding_RequestCompound::is_i_branding_colorbackgroundbutton_Valid() const{
    return m_i_branding_colorbackgroundbutton_isValid;
}

qint32 Branding_RequestCompound::getIBrandingColorbackgroundsmallbox() const {
    return m_i_branding_colorbackgroundsmallbox;
}
void Branding_RequestCompound::setIBrandingColorbackgroundsmallbox(const qint32 &i_branding_colorbackgroundsmallbox) {
    m_i_branding_colorbackgroundsmallbox = i_branding_colorbackgroundsmallbox;
    m_i_branding_colorbackgroundsmallbox_isSet = true;
}

bool Branding_RequestCompound::is_i_branding_colorbackgroundsmallbox_Set() const{
    return m_i_branding_colorbackgroundsmallbox_isSet;
}

bool Branding_RequestCompound::is_i_branding_colorbackgroundsmallbox_Valid() const{
    return m_i_branding_colorbackgroundsmallbox_isValid;
}

qint32 Branding_RequestCompound::getIBrandingInterfacecolor() const {
    return m_i_branding_interfacecolor;
}
void Branding_RequestCompound::setIBrandingInterfacecolor(const qint32 &i_branding_interfacecolor) {
    m_i_branding_interfacecolor = i_branding_interfacecolor;
    m_i_branding_interfacecolor_isSet = true;
}

bool Branding_RequestCompound::is_i_branding_interfacecolor_Set() const{
    return m_i_branding_interfacecolor_isSet;
}

bool Branding_RequestCompound::is_i_branding_interfacecolor_Valid() const{
    return m_i_branding_interfacecolor_isValid;
}

QString Branding_RequestCompound::getSBrandingName() const {
    return m_s_branding_name;
}
void Branding_RequestCompound::setSBrandingName(const QString &s_branding_name) {
    m_s_branding_name = s_branding_name;
    m_s_branding_name_isSet = true;
}

bool Branding_RequestCompound::is_s_branding_name_Set() const{
    return m_s_branding_name_isSet;
}

bool Branding_RequestCompound::is_s_branding_name_Valid() const{
    return m_s_branding_name_isValid;
}

QString Branding_RequestCompound::getSEmailAddress() const {
    return m_s_email_address;
}
void Branding_RequestCompound::setSEmailAddress(const QString &s_email_address) {
    m_s_email_address = s_email_address;
    m_s_email_address_isSet = true;
}

bool Branding_RequestCompound::is_s_email_address_Set() const{
    return m_s_email_address_isSet;
}

bool Branding_RequestCompound::is_s_email_address_Valid() const{
    return m_s_email_address_isValid;
}

bool Branding_RequestCompound::isBBrandingIsactive() const {
    return m_b_branding_isactive;
}
void Branding_RequestCompound::setBBrandingIsactive(const bool &b_branding_isactive) {
    m_b_branding_isactive = b_branding_isactive;
    m_b_branding_isactive_isSet = true;
}

bool Branding_RequestCompound::is_b_branding_isactive_Set() const{
    return m_b_branding_isactive_isSet;
}

bool Branding_RequestCompound::is_b_branding_isactive_Valid() const{
    return m_b_branding_isactive_isValid;
}

bool Branding_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_branding_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_branding_description.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_branding_logo.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_branding_base64_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_branding_logointerface.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_branding_logointerface_base64_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_branding_colortext_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_branding_colortextlinkbox_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_branding_colortextbutton_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_branding_colorbackground_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_branding_colorbackgroundbutton_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_branding_colorbackgroundsmallbox_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_branding_interfacecolor_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_branding_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_email_address_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_branding_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Branding_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_branding_description_isValid && m_e_branding_logo_isValid && m_i_branding_colortext_isValid && m_i_branding_colortextlinkbox_isValid && m_i_branding_colortextbutton_isValid && m_i_branding_colorbackground_isValid && m_i_branding_colorbackgroundbutton_isValid && m_i_branding_colorbackgroundsmallbox_isValid && m_b_branding_isactive_isValid && true;
}

} // namespace Ezmaxapi
