/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Branding_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Branding_ListElement::Branding_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Branding_ListElement::Branding_ListElement() {
    this->initializeModel();
}

Branding_ListElement::~Branding_ListElement() {}

void Branding_ListElement::initializeModel() {

    m_pki_branding_id_isSet = false;
    m_pki_branding_id_isValid = false;

    m_s_branding_description_x_isSet = false;
    m_s_branding_description_x_isValid = false;

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

    m_b_branding_isactive_isSet = false;
    m_b_branding_isactive_isValid = false;
}

void Branding_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Branding_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_branding_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_branding_id, json[QString("pkiBrandingID")]);
    m_pki_branding_id_isSet = !json[QString("pkiBrandingID")].isNull() && m_pki_branding_id_isValid;

    m_s_branding_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_branding_description_x, json[QString("sBrandingDescriptionX")]);
    m_s_branding_description_x_isSet = !json[QString("sBrandingDescriptionX")].isNull() && m_s_branding_description_x_isValid;

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

    m_b_branding_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_branding_isactive, json[QString("bBrandingIsactive")]);
    m_b_branding_isactive_isSet = !json[QString("bBrandingIsactive")].isNull() && m_b_branding_isactive_isValid;
}

QString Branding_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Branding_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_branding_id_isSet) {
        obj.insert(QString("pkiBrandingID"), ::Ezmaxapi::toJsonValue(m_pki_branding_id));
    }
    if (m_s_branding_description_x_isSet) {
        obj.insert(QString("sBrandingDescriptionX"), ::Ezmaxapi::toJsonValue(m_s_branding_description_x));
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
    if (m_b_branding_isactive_isSet) {
        obj.insert(QString("bBrandingIsactive"), ::Ezmaxapi::toJsonValue(m_b_branding_isactive));
    }
    return obj;
}

qint32 Branding_ListElement::getPkiBrandingId() const {
    return m_pki_branding_id;
}
void Branding_ListElement::setPkiBrandingId(const qint32 &pki_branding_id) {
    m_pki_branding_id = pki_branding_id;
    m_pki_branding_id_isSet = true;
}

bool Branding_ListElement::is_pki_branding_id_Set() const{
    return m_pki_branding_id_isSet;
}

bool Branding_ListElement::is_pki_branding_id_Valid() const{
    return m_pki_branding_id_isValid;
}

QString Branding_ListElement::getSBrandingDescriptionX() const {
    return m_s_branding_description_x;
}
void Branding_ListElement::setSBrandingDescriptionX(const QString &s_branding_description_x) {
    m_s_branding_description_x = s_branding_description_x;
    m_s_branding_description_x_isSet = true;
}

bool Branding_ListElement::is_s_branding_description_x_Set() const{
    return m_s_branding_description_x_isSet;
}

bool Branding_ListElement::is_s_branding_description_x_Valid() const{
    return m_s_branding_description_x_isValid;
}

qint32 Branding_ListElement::getIBrandingColortext() const {
    return m_i_branding_colortext;
}
void Branding_ListElement::setIBrandingColortext(const qint32 &i_branding_colortext) {
    m_i_branding_colortext = i_branding_colortext;
    m_i_branding_colortext_isSet = true;
}

bool Branding_ListElement::is_i_branding_colortext_Set() const{
    return m_i_branding_colortext_isSet;
}

bool Branding_ListElement::is_i_branding_colortext_Valid() const{
    return m_i_branding_colortext_isValid;
}

qint32 Branding_ListElement::getIBrandingColortextlinkbox() const {
    return m_i_branding_colortextlinkbox;
}
void Branding_ListElement::setIBrandingColortextlinkbox(const qint32 &i_branding_colortextlinkbox) {
    m_i_branding_colortextlinkbox = i_branding_colortextlinkbox;
    m_i_branding_colortextlinkbox_isSet = true;
}

bool Branding_ListElement::is_i_branding_colortextlinkbox_Set() const{
    return m_i_branding_colortextlinkbox_isSet;
}

bool Branding_ListElement::is_i_branding_colortextlinkbox_Valid() const{
    return m_i_branding_colortextlinkbox_isValid;
}

qint32 Branding_ListElement::getIBrandingColortextbutton() const {
    return m_i_branding_colortextbutton;
}
void Branding_ListElement::setIBrandingColortextbutton(const qint32 &i_branding_colortextbutton) {
    m_i_branding_colortextbutton = i_branding_colortextbutton;
    m_i_branding_colortextbutton_isSet = true;
}

bool Branding_ListElement::is_i_branding_colortextbutton_Set() const{
    return m_i_branding_colortextbutton_isSet;
}

bool Branding_ListElement::is_i_branding_colortextbutton_Valid() const{
    return m_i_branding_colortextbutton_isValid;
}

qint32 Branding_ListElement::getIBrandingColorbackground() const {
    return m_i_branding_colorbackground;
}
void Branding_ListElement::setIBrandingColorbackground(const qint32 &i_branding_colorbackground) {
    m_i_branding_colorbackground = i_branding_colorbackground;
    m_i_branding_colorbackground_isSet = true;
}

bool Branding_ListElement::is_i_branding_colorbackground_Set() const{
    return m_i_branding_colorbackground_isSet;
}

bool Branding_ListElement::is_i_branding_colorbackground_Valid() const{
    return m_i_branding_colorbackground_isValid;
}

qint32 Branding_ListElement::getIBrandingColorbackgroundbutton() const {
    return m_i_branding_colorbackgroundbutton;
}
void Branding_ListElement::setIBrandingColorbackgroundbutton(const qint32 &i_branding_colorbackgroundbutton) {
    m_i_branding_colorbackgroundbutton = i_branding_colorbackgroundbutton;
    m_i_branding_colorbackgroundbutton_isSet = true;
}

bool Branding_ListElement::is_i_branding_colorbackgroundbutton_Set() const{
    return m_i_branding_colorbackgroundbutton_isSet;
}

bool Branding_ListElement::is_i_branding_colorbackgroundbutton_Valid() const{
    return m_i_branding_colorbackgroundbutton_isValid;
}

qint32 Branding_ListElement::getIBrandingColorbackgroundsmallbox() const {
    return m_i_branding_colorbackgroundsmallbox;
}
void Branding_ListElement::setIBrandingColorbackgroundsmallbox(const qint32 &i_branding_colorbackgroundsmallbox) {
    m_i_branding_colorbackgroundsmallbox = i_branding_colorbackgroundsmallbox;
    m_i_branding_colorbackgroundsmallbox_isSet = true;
}

bool Branding_ListElement::is_i_branding_colorbackgroundsmallbox_Set() const{
    return m_i_branding_colorbackgroundsmallbox_isSet;
}

bool Branding_ListElement::is_i_branding_colorbackgroundsmallbox_Valid() const{
    return m_i_branding_colorbackgroundsmallbox_isValid;
}

bool Branding_ListElement::isBBrandingIsactive() const {
    return m_b_branding_isactive;
}
void Branding_ListElement::setBBrandingIsactive(const bool &b_branding_isactive) {
    m_b_branding_isactive = b_branding_isactive;
    m_b_branding_isactive_isSet = true;
}

bool Branding_ListElement::is_b_branding_isactive_Set() const{
    return m_b_branding_isactive_isSet;
}

bool Branding_ListElement::is_b_branding_isactive_Valid() const{
    return m_b_branding_isactive_isValid;
}

bool Branding_ListElement::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_branding_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_branding_description_x_isSet) {
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

        if (m_b_branding_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Branding_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_branding_id_isValid && m_s_branding_description_x_isValid && m_i_branding_colortext_isValid && m_i_branding_colortextlinkbox_isValid && m_i_branding_colortextbutton_isValid && m_i_branding_colorbackground_isValid && m_i_branding_colorbackgroundbutton_isValid && m_i_branding_colorbackgroundsmallbox_isValid && m_b_branding_isactive_isValid && true;
}

} // namespace Ezmaxapi
