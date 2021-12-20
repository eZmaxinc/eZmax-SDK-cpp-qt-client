/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.4
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignbulksend_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignbulksend_ListElement::OAIEzsignbulksend_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksend_ListElement::OAIEzsignbulksend_ListElement() {
    this->initializeModel();
}

OAIEzsignbulksend_ListElement::~OAIEzsignbulksend_ListElement() {}

void OAIEzsignbulksend_ListElement::initializeModel() {

    m_pki_ezsignbulksend_id_isSet = false;
    m_pki_ezsignbulksend_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_s_ezsignbulksend_description_isSet = false;
    m_s_ezsignbulksend_description_isValid = false;

    m_s_ezsignfoldertype_name_x_isSet = false;
    m_s_ezsignfoldertype_name_x_isValid = false;

    m_e_ezsignfoldertype_privacylevel_isSet = false;
    m_e_ezsignfoldertype_privacylevel_isValid = false;

    m_b_ezsignbulksend_isactive_isSet = false;
    m_b_ezsignbulksend_isactive_isValid = false;

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
}

void OAIEzsignbulksend_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksend_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_ezsignbulksend_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignbulksend_id, json[QString("pkiEzsignbulksendID")]);
    m_pki_ezsignbulksend_id_isSet = !json[QString("pkiEzsignbulksendID")].isNull() && m_pki_ezsignbulksend_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_s_ezsignbulksend_description_isValid = ::OpenAPI::fromJsonValue(s_ezsignbulksend_description, json[QString("sEzsignbulksendDescription")]);
    m_s_ezsignbulksend_description_isSet = !json[QString("sEzsignbulksendDescription")].isNull() && m_s_ezsignbulksend_description_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::OpenAPI::fromJsonValue(s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;

    m_e_ezsignfoldertype_privacylevel_isValid = ::OpenAPI::fromJsonValue(e_ezsignfoldertype_privacylevel, json[QString("eEzsignfoldertypePrivacylevel")]);
    m_e_ezsignfoldertype_privacylevel_isSet = !json[QString("eEzsignfoldertypePrivacylevel")].isNull() && m_e_ezsignfoldertype_privacylevel_isValid;

    m_b_ezsignbulksend_isactive_isValid = ::OpenAPI::fromJsonValue(b_ezsignbulksend_isactive, json[QString("bEzsignbulksendIsactive")]);
    m_b_ezsignbulksend_isactive_isSet = !json[QString("bEzsignbulksendIsactive")].isNull() && m_b_ezsignbulksend_isactive_isValid;

    m_i_ezsignbulksendtransmission_isValid = ::OpenAPI::fromJsonValue(i_ezsignbulksendtransmission, json[QString("iEzsignbulksendtransmission")]);
    m_i_ezsignbulksendtransmission_isSet = !json[QString("iEzsignbulksendtransmission")].isNull() && m_i_ezsignbulksendtransmission_isValid;

    m_i_ezsignfolder_isValid = ::OpenAPI::fromJsonValue(i_ezsignfolder, json[QString("iEzsignfolder")]);
    m_i_ezsignfolder_isSet = !json[QString("iEzsignfolder")].isNull() && m_i_ezsignfolder_isValid;

    m_i_ezsigndocument_isValid = ::OpenAPI::fromJsonValue(i_ezsigndocument, json[QString("iEzsigndocument")]);
    m_i_ezsigndocument_isSet = !json[QString("iEzsigndocument")].isNull() && m_i_ezsigndocument_isValid;

    m_i_ezsignsignature_isValid = ::OpenAPI::fromJsonValue(i_ezsignsignature, json[QString("iEzsignsignature")]);
    m_i_ezsignsignature_isSet = !json[QString("iEzsignsignature")].isNull() && m_i_ezsignsignature_isValid;

    m_i_ezsignsignature_signed_isValid = ::OpenAPI::fromJsonValue(i_ezsignsignature_signed, json[QString("iEzsignsignatureSigned")]);
    m_i_ezsignsignature_signed_isSet = !json[QString("iEzsignsignatureSigned")].isNull() && m_i_ezsignsignature_signed_isValid;
}

QString OAIEzsignbulksend_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksend_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignbulksend_id_isSet) {
        obj.insert(QString("pkiEzsignbulksendID"), ::OpenAPI::toJsonValue(pki_ezsignbulksend_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(fki_ezsignfoldertype_id));
    }
    if (m_s_ezsignbulksend_description_isSet) {
        obj.insert(QString("sEzsignbulksendDescription"), ::OpenAPI::toJsonValue(s_ezsignbulksend_description));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::OpenAPI::toJsonValue(s_ezsignfoldertype_name_x));
    }
    if (e_ezsignfoldertype_privacylevel.isSet()) {
        obj.insert(QString("eEzsignfoldertypePrivacylevel"), ::OpenAPI::toJsonValue(e_ezsignfoldertype_privacylevel));
    }
    if (m_b_ezsignbulksend_isactive_isSet) {
        obj.insert(QString("bEzsignbulksendIsactive"), ::OpenAPI::toJsonValue(b_ezsignbulksend_isactive));
    }
    if (m_i_ezsignbulksendtransmission_isSet) {
        obj.insert(QString("iEzsignbulksendtransmission"), ::OpenAPI::toJsonValue(i_ezsignbulksendtransmission));
    }
    if (m_i_ezsignfolder_isSet) {
        obj.insert(QString("iEzsignfolder"), ::OpenAPI::toJsonValue(i_ezsignfolder));
    }
    if (m_i_ezsigndocument_isSet) {
        obj.insert(QString("iEzsigndocument"), ::OpenAPI::toJsonValue(i_ezsigndocument));
    }
    if (m_i_ezsignsignature_isSet) {
        obj.insert(QString("iEzsignsignature"), ::OpenAPI::toJsonValue(i_ezsignsignature));
    }
    if (m_i_ezsignsignature_signed_isSet) {
        obj.insert(QString("iEzsignsignatureSigned"), ::OpenAPI::toJsonValue(i_ezsignsignature_signed));
    }
    return obj;
}

qint32 OAIEzsignbulksend_ListElement::getPkiEzsignbulksendId() const {
    return pki_ezsignbulksend_id;
}
void OAIEzsignbulksend_ListElement::setPkiEzsignbulksendId(const qint32 &pki_ezsignbulksend_id) {
    this->pki_ezsignbulksend_id = pki_ezsignbulksend_id;
    this->m_pki_ezsignbulksend_id_isSet = true;
}

bool OAIEzsignbulksend_ListElement::is_pki_ezsignbulksend_id_Set() const{
    return m_pki_ezsignbulksend_id_isSet;
}

bool OAIEzsignbulksend_ListElement::is_pki_ezsignbulksend_id_Valid() const{
    return m_pki_ezsignbulksend_id_isValid;
}

qint32 OAIEzsignbulksend_ListElement::getFkiEzsignfoldertypeId() const {
    return fki_ezsignfoldertype_id;
}
void OAIEzsignbulksend_ListElement::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    this->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    this->m_fki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsignbulksend_ListElement::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool OAIEzsignbulksend_ListElement::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

QString OAIEzsignbulksend_ListElement::getSEzsignbulksendDescription() const {
    return s_ezsignbulksend_description;
}
void OAIEzsignbulksend_ListElement::setSEzsignbulksendDescription(const QString &s_ezsignbulksend_description) {
    this->s_ezsignbulksend_description = s_ezsignbulksend_description;
    this->m_s_ezsignbulksend_description_isSet = true;
}

bool OAIEzsignbulksend_ListElement::is_s_ezsignbulksend_description_Set() const{
    return m_s_ezsignbulksend_description_isSet;
}

bool OAIEzsignbulksend_ListElement::is_s_ezsignbulksend_description_Valid() const{
    return m_s_ezsignbulksend_description_isValid;
}

QString OAIEzsignbulksend_ListElement::getSEzsignfoldertypeNameX() const {
    return s_ezsignfoldertype_name_x;
}
void OAIEzsignbulksend_ListElement::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    this->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    this->m_s_ezsignfoldertype_name_x_isSet = true;
}

bool OAIEzsignbulksend_ListElement::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool OAIEzsignbulksend_ListElement::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

OAIField_eEzsignfoldertypePrivacylevel OAIEzsignbulksend_ListElement::getEEzsignfoldertypePrivacylevel() const {
    return e_ezsignfoldertype_privacylevel;
}
void OAIEzsignbulksend_ListElement::setEEzsignfoldertypePrivacylevel(const OAIField_eEzsignfoldertypePrivacylevel &e_ezsignfoldertype_privacylevel) {
    this->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    this->m_e_ezsignfoldertype_privacylevel_isSet = true;
}

bool OAIEzsignbulksend_ListElement::is_e_ezsignfoldertype_privacylevel_Set() const{
    return m_e_ezsignfoldertype_privacylevel_isSet;
}

bool OAIEzsignbulksend_ListElement::is_e_ezsignfoldertype_privacylevel_Valid() const{
    return m_e_ezsignfoldertype_privacylevel_isValid;
}

bool OAIEzsignbulksend_ListElement::isBEzsignbulksendIsactive() const {
    return b_ezsignbulksend_isactive;
}
void OAIEzsignbulksend_ListElement::setBEzsignbulksendIsactive(const bool &b_ezsignbulksend_isactive) {
    this->b_ezsignbulksend_isactive = b_ezsignbulksend_isactive;
    this->m_b_ezsignbulksend_isactive_isSet = true;
}

bool OAIEzsignbulksend_ListElement::is_b_ezsignbulksend_isactive_Set() const{
    return m_b_ezsignbulksend_isactive_isSet;
}

bool OAIEzsignbulksend_ListElement::is_b_ezsignbulksend_isactive_Valid() const{
    return m_b_ezsignbulksend_isactive_isValid;
}

qint32 OAIEzsignbulksend_ListElement::getIEzsignbulksendtransmission() const {
    return i_ezsignbulksendtransmission;
}
void OAIEzsignbulksend_ListElement::setIEzsignbulksendtransmission(const qint32 &i_ezsignbulksendtransmission) {
    this->i_ezsignbulksendtransmission = i_ezsignbulksendtransmission;
    this->m_i_ezsignbulksendtransmission_isSet = true;
}

bool OAIEzsignbulksend_ListElement::is_i_ezsignbulksendtransmission_Set() const{
    return m_i_ezsignbulksendtransmission_isSet;
}

bool OAIEzsignbulksend_ListElement::is_i_ezsignbulksendtransmission_Valid() const{
    return m_i_ezsignbulksendtransmission_isValid;
}

qint32 OAIEzsignbulksend_ListElement::getIEzsignfolder() const {
    return i_ezsignfolder;
}
void OAIEzsignbulksend_ListElement::setIEzsignfolder(const qint32 &i_ezsignfolder) {
    this->i_ezsignfolder = i_ezsignfolder;
    this->m_i_ezsignfolder_isSet = true;
}

bool OAIEzsignbulksend_ListElement::is_i_ezsignfolder_Set() const{
    return m_i_ezsignfolder_isSet;
}

bool OAIEzsignbulksend_ListElement::is_i_ezsignfolder_Valid() const{
    return m_i_ezsignfolder_isValid;
}

qint32 OAIEzsignbulksend_ListElement::getIEzsigndocument() const {
    return i_ezsigndocument;
}
void OAIEzsignbulksend_ListElement::setIEzsigndocument(const qint32 &i_ezsigndocument) {
    this->i_ezsigndocument = i_ezsigndocument;
    this->m_i_ezsigndocument_isSet = true;
}

bool OAIEzsignbulksend_ListElement::is_i_ezsigndocument_Set() const{
    return m_i_ezsigndocument_isSet;
}

bool OAIEzsignbulksend_ListElement::is_i_ezsigndocument_Valid() const{
    return m_i_ezsigndocument_isValid;
}

qint32 OAIEzsignbulksend_ListElement::getIEzsignsignature() const {
    return i_ezsignsignature;
}
void OAIEzsignbulksend_ListElement::setIEzsignsignature(const qint32 &i_ezsignsignature) {
    this->i_ezsignsignature = i_ezsignsignature;
    this->m_i_ezsignsignature_isSet = true;
}

bool OAIEzsignbulksend_ListElement::is_i_ezsignsignature_Set() const{
    return m_i_ezsignsignature_isSet;
}

bool OAIEzsignbulksend_ListElement::is_i_ezsignsignature_Valid() const{
    return m_i_ezsignsignature_isValid;
}

qint32 OAIEzsignbulksend_ListElement::getIEzsignsignatureSigned() const {
    return i_ezsignsignature_signed;
}
void OAIEzsignbulksend_ListElement::setIEzsignsignatureSigned(const qint32 &i_ezsignsignature_signed) {
    this->i_ezsignsignature_signed = i_ezsignsignature_signed;
    this->m_i_ezsignsignature_signed_isSet = true;
}

bool OAIEzsignbulksend_ListElement::is_i_ezsignsignature_signed_Set() const{
    return m_i_ezsignsignature_signed_isSet;
}

bool OAIEzsignbulksend_ListElement::is_i_ezsignsignature_signed_Valid() const{
    return m_i_ezsignsignature_signed_isValid;
}

bool OAIEzsignbulksend_ListElement::isSet() const {
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

        if (e_ezsignfoldertype_privacylevel.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignbulksend_isactive_isSet) {
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
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksend_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignbulksend_id_isValid && m_fki_ezsignfoldertype_id_isValid && m_s_ezsignbulksend_description_isValid && m_s_ezsignfoldertype_name_x_isValid && m_e_ezsignfoldertype_privacylevel_isValid && m_b_ezsignbulksend_isactive_isValid && m_i_ezsignbulksendtransmission_isValid && m_i_ezsignfolder_isValid && m_i_ezsigndocument_isValid && m_i_ezsignsignature_isValid && m_i_ezsignsignature_signed_isValid && true;
}

} // namespace OpenAPI
