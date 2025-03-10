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

#include "Ezsignbulksend_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignbulksend_ListElement::Ezsignbulksend_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignbulksend_ListElement::Ezsignbulksend_ListElement() {
    this->initializeModel();
}

Ezsignbulksend_ListElement::~Ezsignbulksend_ListElement() {}

void Ezsignbulksend_ListElement::initializeModel() {

    m_pki_ezsignbulksend_id_isSet = false;
    m_pki_ezsignbulksend_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_s_ezsignbulksend_description_isSet = false;
    m_s_ezsignbulksend_description_isValid = false;

    m_s_ezsignfoldertype_name_x_isSet = false;
    m_s_ezsignfoldertype_name_x_isValid = false;

    m_b_ezsignbulksend_needvalidation_isSet = false;
    m_b_ezsignbulksend_needvalidation_isValid = false;

    m_i_ezsignbulksendtransmission_isSet = false;
    m_i_ezsignbulksendtransmission_isValid = false;

    m_i_ezsignfolder_isSet = false;
    m_i_ezsignfolder_isValid = false;

    m_i_ezsigndocument_isSet = false;
    m_i_ezsigndocument_isValid = false;

    m_i_ezsignsignature_isSet = false;
    m_i_ezsignsignature_isValid = false;

    m_i_ezsignsignature_signed_isSet = false;
    m_i_ezsignsignature_signed_isValid = false;

    m_b_ezsignbulksend_isactive_isSet = false;
    m_b_ezsignbulksend_isactive_isValid = false;
}

void Ezsignbulksend_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignbulksend_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_ezsignbulksend_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignbulksend_id, json[QString("pkiEzsignbulksendID")]);
    m_pki_ezsignbulksend_id_isSet = !json[QString("pkiEzsignbulksendID")].isNull() && m_pki_ezsignbulksend_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_s_ezsignbulksend_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignbulksend_description, json[QString("sEzsignbulksendDescription")]);
    m_s_ezsignbulksend_description_isSet = !json[QString("sEzsignbulksendDescription")].isNull() && m_s_ezsignbulksend_description_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;

    m_b_ezsignbulksend_needvalidation_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignbulksend_needvalidation, json[QString("bEzsignbulksendNeedvalidation")]);
    m_b_ezsignbulksend_needvalidation_isSet = !json[QString("bEzsignbulksendNeedvalidation")].isNull() && m_b_ezsignbulksend_needvalidation_isValid;

    m_i_ezsignbulksendtransmission_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignbulksendtransmission, json[QString("iEzsignbulksendtransmission")]);
    m_i_ezsignbulksendtransmission_isSet = !json[QString("iEzsignbulksendtransmission")].isNull() && m_i_ezsignbulksendtransmission_isValid;

    m_i_ezsignfolder_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignfolder, json[QString("iEzsignfolder")]);
    m_i_ezsignfolder_isSet = !json[QString("iEzsignfolder")].isNull() && m_i_ezsignfolder_isValid;

    m_i_ezsigndocument_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigndocument, json[QString("iEzsigndocument")]);
    m_i_ezsigndocument_isSet = !json[QString("iEzsigndocument")].isNull() && m_i_ezsigndocument_isValid;

    m_i_ezsignsignature_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignsignature, json[QString("iEzsignsignature")]);
    m_i_ezsignsignature_isSet = !json[QString("iEzsignsignature")].isNull() && m_i_ezsignsignature_isValid;

    m_i_ezsignsignature_signed_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsignsignature_signed, json[QString("iEzsignsignatureSigned")]);
    m_i_ezsignsignature_signed_isSet = !json[QString("iEzsignsignatureSigned")].isNull() && m_i_ezsignsignature_signed_isValid;

    m_b_ezsignbulksend_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignbulksend_isactive, json[QString("bEzsignbulksendIsactive")]);
    m_b_ezsignbulksend_isactive_isSet = !json[QString("bEzsignbulksendIsactive")].isNull() && m_b_ezsignbulksend_isactive_isValid;
}

QString Ezsignbulksend_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignbulksend_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignbulksend_id_isSet) {
        obj.insert(QString("pkiEzsignbulksendID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignbulksend_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfoldertype_id));
    }
    if (m_s_ezsignbulksend_description_isSet) {
        obj.insert(QString("sEzsignbulksendDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsignbulksend_description));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::Ezmaxapi::toJsonValue(m_s_ezsignfoldertype_name_x));
    }
    if (m_b_ezsignbulksend_needvalidation_isSet) {
        obj.insert(QString("bEzsignbulksendNeedvalidation"), ::Ezmaxapi::toJsonValue(m_b_ezsignbulksend_needvalidation));
    }
    if (m_i_ezsignbulksendtransmission_isSet) {
        obj.insert(QString("iEzsignbulksendtransmission"), ::Ezmaxapi::toJsonValue(m_i_ezsignbulksendtransmission));
    }
    if (m_i_ezsignfolder_isSet) {
        obj.insert(QString("iEzsignfolder"), ::Ezmaxapi::toJsonValue(m_i_ezsignfolder));
    }
    if (m_i_ezsigndocument_isSet) {
        obj.insert(QString("iEzsigndocument"), ::Ezmaxapi::toJsonValue(m_i_ezsigndocument));
    }
    if (m_i_ezsignsignature_isSet) {
        obj.insert(QString("iEzsignsignature"), ::Ezmaxapi::toJsonValue(m_i_ezsignsignature));
    }
    if (m_i_ezsignsignature_signed_isSet) {
        obj.insert(QString("iEzsignsignatureSigned"), ::Ezmaxapi::toJsonValue(m_i_ezsignsignature_signed));
    }
    if (m_b_ezsignbulksend_isactive_isSet) {
        obj.insert(QString("bEzsignbulksendIsactive"), ::Ezmaxapi::toJsonValue(m_b_ezsignbulksend_isactive));
    }
    return obj;
}

qint32 Ezsignbulksend_ListElement::getPkiEzsignbulksendId() const {
    return m_pki_ezsignbulksend_id;
}
void Ezsignbulksend_ListElement::setPkiEzsignbulksendId(const qint32 &pki_ezsignbulksend_id) {
    m_pki_ezsignbulksend_id = pki_ezsignbulksend_id;
    m_pki_ezsignbulksend_id_isSet = true;
}

bool Ezsignbulksend_ListElement::is_pki_ezsignbulksend_id_Set() const{
    return m_pki_ezsignbulksend_id_isSet;
}

bool Ezsignbulksend_ListElement::is_pki_ezsignbulksend_id_Valid() const{
    return m_pki_ezsignbulksend_id_isValid;
}

qint32 Ezsignbulksend_ListElement::getFkiEzsignfoldertypeId() const {
    return m_fki_ezsignfoldertype_id;
}
void Ezsignbulksend_ListElement::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    m_fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    m_fki_ezsignfoldertype_id_isSet = true;
}

bool Ezsignbulksend_ListElement::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool Ezsignbulksend_ListElement::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

QString Ezsignbulksend_ListElement::getSEzsignbulksendDescription() const {
    return m_s_ezsignbulksend_description;
}
void Ezsignbulksend_ListElement::setSEzsignbulksendDescription(const QString &s_ezsignbulksend_description) {
    m_s_ezsignbulksend_description = s_ezsignbulksend_description;
    m_s_ezsignbulksend_description_isSet = true;
}

bool Ezsignbulksend_ListElement::is_s_ezsignbulksend_description_Set() const{
    return m_s_ezsignbulksend_description_isSet;
}

bool Ezsignbulksend_ListElement::is_s_ezsignbulksend_description_Valid() const{
    return m_s_ezsignbulksend_description_isValid;
}

QString Ezsignbulksend_ListElement::getSEzsignfoldertypeNameX() const {
    return m_s_ezsignfoldertype_name_x;
}
void Ezsignbulksend_ListElement::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    m_s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    m_s_ezsignfoldertype_name_x_isSet = true;
}

bool Ezsignbulksend_ListElement::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool Ezsignbulksend_ListElement::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

bool Ezsignbulksend_ListElement::isBEzsignbulksendNeedvalidation() const {
    return m_b_ezsignbulksend_needvalidation;
}
void Ezsignbulksend_ListElement::setBEzsignbulksendNeedvalidation(const bool &b_ezsignbulksend_needvalidation) {
    m_b_ezsignbulksend_needvalidation = b_ezsignbulksend_needvalidation;
    m_b_ezsignbulksend_needvalidation_isSet = true;
}

bool Ezsignbulksend_ListElement::is_b_ezsignbulksend_needvalidation_Set() const{
    return m_b_ezsignbulksend_needvalidation_isSet;
}

bool Ezsignbulksend_ListElement::is_b_ezsignbulksend_needvalidation_Valid() const{
    return m_b_ezsignbulksend_needvalidation_isValid;
}

qint32 Ezsignbulksend_ListElement::getIEzsignbulksendtransmission() const {
    return m_i_ezsignbulksendtransmission;
}
void Ezsignbulksend_ListElement::setIEzsignbulksendtransmission(const qint32 &i_ezsignbulksendtransmission) {
    m_i_ezsignbulksendtransmission = i_ezsignbulksendtransmission;
    m_i_ezsignbulksendtransmission_isSet = true;
}

bool Ezsignbulksend_ListElement::is_i_ezsignbulksendtransmission_Set() const{
    return m_i_ezsignbulksendtransmission_isSet;
}

bool Ezsignbulksend_ListElement::is_i_ezsignbulksendtransmission_Valid() const{
    return m_i_ezsignbulksendtransmission_isValid;
}

qint32 Ezsignbulksend_ListElement::getIEzsignfolder() const {
    return m_i_ezsignfolder;
}
void Ezsignbulksend_ListElement::setIEzsignfolder(const qint32 &i_ezsignfolder) {
    m_i_ezsignfolder = i_ezsignfolder;
    m_i_ezsignfolder_isSet = true;
}

bool Ezsignbulksend_ListElement::is_i_ezsignfolder_Set() const{
    return m_i_ezsignfolder_isSet;
}

bool Ezsignbulksend_ListElement::is_i_ezsignfolder_Valid() const{
    return m_i_ezsignfolder_isValid;
}

qint32 Ezsignbulksend_ListElement::getIEzsigndocument() const {
    return m_i_ezsigndocument;
}
void Ezsignbulksend_ListElement::setIEzsigndocument(const qint32 &i_ezsigndocument) {
    m_i_ezsigndocument = i_ezsigndocument;
    m_i_ezsigndocument_isSet = true;
}

bool Ezsignbulksend_ListElement::is_i_ezsigndocument_Set() const{
    return m_i_ezsigndocument_isSet;
}

bool Ezsignbulksend_ListElement::is_i_ezsigndocument_Valid() const{
    return m_i_ezsigndocument_isValid;
}

qint32 Ezsignbulksend_ListElement::getIEzsignsignature() const {
    return m_i_ezsignsignature;
}
void Ezsignbulksend_ListElement::setIEzsignsignature(const qint32 &i_ezsignsignature) {
    m_i_ezsignsignature = i_ezsignsignature;
    m_i_ezsignsignature_isSet = true;
}

bool Ezsignbulksend_ListElement::is_i_ezsignsignature_Set() const{
    return m_i_ezsignsignature_isSet;
}

bool Ezsignbulksend_ListElement::is_i_ezsignsignature_Valid() const{
    return m_i_ezsignsignature_isValid;
}

qint32 Ezsignbulksend_ListElement::getIEzsignsignatureSigned() const {
    return m_i_ezsignsignature_signed;
}
void Ezsignbulksend_ListElement::setIEzsignsignatureSigned(const qint32 &i_ezsignsignature_signed) {
    m_i_ezsignsignature_signed = i_ezsignsignature_signed;
    m_i_ezsignsignature_signed_isSet = true;
}

bool Ezsignbulksend_ListElement::is_i_ezsignsignature_signed_Set() const{
    return m_i_ezsignsignature_signed_isSet;
}

bool Ezsignbulksend_ListElement::is_i_ezsignsignature_signed_Valid() const{
    return m_i_ezsignsignature_signed_isValid;
}

bool Ezsignbulksend_ListElement::isBEzsignbulksendIsactive() const {
    return m_b_ezsignbulksend_isactive;
}
void Ezsignbulksend_ListElement::setBEzsignbulksendIsactive(const bool &b_ezsignbulksend_isactive) {
    m_b_ezsignbulksend_isactive = b_ezsignbulksend_isactive;
    m_b_ezsignbulksend_isactive_isSet = true;
}

bool Ezsignbulksend_ListElement::is_b_ezsignbulksend_isactive_Set() const{
    return m_b_ezsignbulksend_isactive_isSet;
}

bool Ezsignbulksend_ListElement::is_b_ezsignbulksend_isactive_Valid() const{
    return m_b_ezsignbulksend_isactive_isValid;
}

bool Ezsignbulksend_ListElement::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignbulksend_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldertype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignbulksend_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfoldertype_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignbulksend_needvalidation_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignbulksendtransmission_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignfolder_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigndocument_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignature_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignature_signed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignbulksend_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignbulksend_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignbulksend_id_isValid && m_fki_ezsignfoldertype_id_isValid && m_s_ezsignbulksend_description_isValid && m_s_ezsignfoldertype_name_x_isValid && m_b_ezsignbulksend_needvalidation_isValid && m_i_ezsignbulksendtransmission_isValid && m_i_ezsignfolder_isValid && m_i_ezsigndocument_isValid && m_i_ezsignsignature_isValid && m_i_ezsignsignature_signed_isValid && m_b_ezsignbulksend_isactive_isValid && true;
}

} // namespace Ezmaxapi
