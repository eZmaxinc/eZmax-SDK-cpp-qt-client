/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.8
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplate_getObject_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplate_getObject_v1_Response_mPayload::OAIEzsigntemplate_getObject_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplate_getObject_v1_Response_mPayload::OAIEzsigntemplate_getObject_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigntemplate_getObject_v1_Response_mPayload::~OAIEzsigntemplate_getObject_v1_Response_mPayload() {}

void OAIEzsigntemplate_getObject_v1_Response_mPayload::initializeModel() {

    m_pki_ezsigntemplate_id_isSet = false;
    m_pki_ezsigntemplate_id_isValid = false;

    m_fki_ezsigntemplatedocument_id_isSet = false;
    m_fki_ezsigntemplatedocument_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_language_name_x_isSet = false;
    m_s_language_name_x_isValid = false;

    m_s_ezsigntemplate_description_isSet = false;
    m_s_ezsigntemplate_description_isValid = false;

    m_b_ezsigntemplate_adminonly_isSet = false;
    m_b_ezsigntemplate_adminonly_isValid = false;

    m_s_ezsignfoldertype_name_x_isSet = false;
    m_s_ezsignfoldertype_name_x_isValid = false;

    m_obj_ezsigntemplatedocument_isSet = false;
    m_obj_ezsigntemplatedocument_isValid = false;

    m_a_obj_ezsigntemplatesigner_isSet = false;
    m_a_obj_ezsigntemplatesigner_isValid = false;
}

void OAIEzsigntemplate_getObject_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplate_getObject_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplate_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplate_id, json[QString("pkiEzsigntemplateID")]);
    m_pki_ezsigntemplate_id_isSet = !json[QString("pkiEzsigntemplateID")].isNull() && m_pki_ezsigntemplate_id_isValid;

    m_fki_ezsigntemplatedocument_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplatedocument_id, json[QString("fkiEzsigntemplatedocumentID")]);
    m_fki_ezsigntemplatedocument_id_isSet = !json[QString("fkiEzsigntemplatedocumentID")].isNull() && m_fki_ezsigntemplatedocument_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_language_name_x_isValid = ::OpenAPI::fromJsonValue(s_language_name_x, json[QString("sLanguageNameX")]);
    m_s_language_name_x_isSet = !json[QString("sLanguageNameX")].isNull() && m_s_language_name_x_isValid;

    m_s_ezsigntemplate_description_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplate_description, json[QString("sEzsigntemplateDescription")]);
    m_s_ezsigntemplate_description_isSet = !json[QString("sEzsigntemplateDescription")].isNull() && m_s_ezsigntemplate_description_isValid;

    m_b_ezsigntemplate_adminonly_isValid = ::OpenAPI::fromJsonValue(b_ezsigntemplate_adminonly, json[QString("bEzsigntemplateAdminonly")]);
    m_b_ezsigntemplate_adminonly_isSet = !json[QString("bEzsigntemplateAdminonly")].isNull() && m_b_ezsigntemplate_adminonly_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::OpenAPI::fromJsonValue(s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;

    m_obj_ezsigntemplatedocument_isValid = ::OpenAPI::fromJsonValue(obj_ezsigntemplatedocument, json[QString("objEzsigntemplatedocument")]);
    m_obj_ezsigntemplatedocument_isSet = !json[QString("objEzsigntemplatedocument")].isNull() && m_obj_ezsigntemplatedocument_isValid;

    m_a_obj_ezsigntemplatesigner_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigntemplatesigner, json[QString("a_objEzsigntemplatesigner")]);
    m_a_obj_ezsigntemplatesigner_isSet = !json[QString("a_objEzsigntemplatesigner")].isNull() && m_a_obj_ezsigntemplatesigner_isValid;
}

QString OAIEzsigntemplate_getObject_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplate_getObject_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplate_id_isSet) {
        obj.insert(QString("pkiEzsigntemplateID"), ::OpenAPI::toJsonValue(pki_ezsigntemplate_id));
    }
    if (m_fki_ezsigntemplatedocument_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatedocumentID"), ::OpenAPI::toJsonValue(fki_ezsigntemplatedocument_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(fki_ezsignfoldertype_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::OpenAPI::toJsonValue(fki_language_id));
    }
    if (m_s_language_name_x_isSet) {
        obj.insert(QString("sLanguageNameX"), ::OpenAPI::toJsonValue(s_language_name_x));
    }
    if (m_s_ezsigntemplate_description_isSet) {
        obj.insert(QString("sEzsigntemplateDescription"), ::OpenAPI::toJsonValue(s_ezsigntemplate_description));
    }
    if (m_b_ezsigntemplate_adminonly_isSet) {
        obj.insert(QString("bEzsigntemplateAdminonly"), ::OpenAPI::toJsonValue(b_ezsigntemplate_adminonly));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::OpenAPI::toJsonValue(s_ezsignfoldertype_name_x));
    }
    if (obj_ezsigntemplatedocument.isSet()) {
        obj.insert(QString("objEzsigntemplatedocument"), ::OpenAPI::toJsonValue(obj_ezsigntemplatedocument));
    }
    if (a_obj_ezsigntemplatesigner.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatesigner"), ::OpenAPI::toJsonValue(a_obj_ezsigntemplatesigner));
    }
    return obj;
}

qint32 OAIEzsigntemplate_getObject_v1_Response_mPayload::getPkiEzsigntemplateId() const {
    return pki_ezsigntemplate_id;
}
void OAIEzsigntemplate_getObject_v1_Response_mPayload::setPkiEzsigntemplateId(const qint32 &pki_ezsigntemplate_id) {
    this->pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    this->m_pki_ezsigntemplate_id_isSet = true;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::is_pki_ezsigntemplate_id_Set() const{
    return m_pki_ezsigntemplate_id_isSet;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::is_pki_ezsigntemplate_id_Valid() const{
    return m_pki_ezsigntemplate_id_isValid;
}

qint32 OAIEzsigntemplate_getObject_v1_Response_mPayload::getFkiEzsigntemplatedocumentId() const {
    return fki_ezsigntemplatedocument_id;
}
void OAIEzsigntemplate_getObject_v1_Response_mPayload::setFkiEzsigntemplatedocumentId(const qint32 &fki_ezsigntemplatedocument_id) {
    this->fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    this->m_fki_ezsigntemplatedocument_id_isSet = true;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::is_fki_ezsigntemplatedocument_id_Set() const{
    return m_fki_ezsigntemplatedocument_id_isSet;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::is_fki_ezsigntemplatedocument_id_Valid() const{
    return m_fki_ezsigntemplatedocument_id_isValid;
}

qint32 OAIEzsigntemplate_getObject_v1_Response_mPayload::getFkiEzsignfoldertypeId() const {
    return fki_ezsignfoldertype_id;
}
void OAIEzsigntemplate_getObject_v1_Response_mPayload::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    this->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    this->m_fki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

qint32 OAIEzsigntemplate_getObject_v1_Response_mPayload::getFkiLanguageId() const {
    return fki_language_id;
}
void OAIEzsigntemplate_getObject_v1_Response_mPayload::setFkiLanguageId(const qint32 &fki_language_id) {
    this->fki_language_id = fki_language_id;
    this->m_fki_language_id_isSet = true;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString OAIEzsigntemplate_getObject_v1_Response_mPayload::getSLanguageNameX() const {
    return s_language_name_x;
}
void OAIEzsigntemplate_getObject_v1_Response_mPayload::setSLanguageNameX(const QString &s_language_name_x) {
    this->s_language_name_x = s_language_name_x;
    this->m_s_language_name_x_isSet = true;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::is_s_language_name_x_Set() const{
    return m_s_language_name_x_isSet;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::is_s_language_name_x_Valid() const{
    return m_s_language_name_x_isValid;
}

QString OAIEzsigntemplate_getObject_v1_Response_mPayload::getSEzsigntemplateDescription() const {
    return s_ezsigntemplate_description;
}
void OAIEzsigntemplate_getObject_v1_Response_mPayload::setSEzsigntemplateDescription(const QString &s_ezsigntemplate_description) {
    this->s_ezsigntemplate_description = s_ezsigntemplate_description;
    this->m_s_ezsigntemplate_description_isSet = true;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::is_s_ezsigntemplate_description_Set() const{
    return m_s_ezsigntemplate_description_isSet;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::is_s_ezsigntemplate_description_Valid() const{
    return m_s_ezsigntemplate_description_isValid;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::isBEzsigntemplateAdminonly() const {
    return b_ezsigntemplate_adminonly;
}
void OAIEzsigntemplate_getObject_v1_Response_mPayload::setBEzsigntemplateAdminonly(const bool &b_ezsigntemplate_adminonly) {
    this->b_ezsigntemplate_adminonly = b_ezsigntemplate_adminonly;
    this->m_b_ezsigntemplate_adminonly_isSet = true;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::is_b_ezsigntemplate_adminonly_Set() const{
    return m_b_ezsigntemplate_adminonly_isSet;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::is_b_ezsigntemplate_adminonly_Valid() const{
    return m_b_ezsigntemplate_adminonly_isValid;
}

QString OAIEzsigntemplate_getObject_v1_Response_mPayload::getSEzsignfoldertypeNameX() const {
    return s_ezsignfoldertype_name_x;
}
void OAIEzsigntemplate_getObject_v1_Response_mPayload::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    this->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    this->m_s_ezsignfoldertype_name_x_isSet = true;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

OAIEzsigntemplatedocument_Response OAIEzsigntemplate_getObject_v1_Response_mPayload::getObjEzsigntemplatedocument() const {
    return obj_ezsigntemplatedocument;
}
void OAIEzsigntemplate_getObject_v1_Response_mPayload::setObjEzsigntemplatedocument(const OAIEzsigntemplatedocument_Response &obj_ezsigntemplatedocument) {
    this->obj_ezsigntemplatedocument = obj_ezsigntemplatedocument;
    this->m_obj_ezsigntemplatedocument_isSet = true;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::is_obj_ezsigntemplatedocument_Set() const{
    return m_obj_ezsigntemplatedocument_isSet;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::is_obj_ezsigntemplatedocument_Valid() const{
    return m_obj_ezsigntemplatedocument_isValid;
}

QList<OAIEzsigntemplatesigner_ResponseCompound> OAIEzsigntemplate_getObject_v1_Response_mPayload::getAObjEzsigntemplatesigner() const {
    return a_obj_ezsigntemplatesigner;
}
void OAIEzsigntemplate_getObject_v1_Response_mPayload::setAObjEzsigntemplatesigner(const QList<OAIEzsigntemplatesigner_ResponseCompound> &a_obj_ezsigntemplatesigner) {
    this->a_obj_ezsigntemplatesigner = a_obj_ezsigntemplatesigner;
    this->m_a_obj_ezsigntemplatesigner_isSet = true;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::is_a_obj_ezsigntemplatesigner_Set() const{
    return m_a_obj_ezsigntemplatesigner_isSet;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::is_a_obj_ezsigntemplatesigner_Valid() const{
    return m_a_obj_ezsigntemplatesigner_isValid;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplate_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatedocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldertype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_language_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplate_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplate_adminonly_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfoldertype_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (obj_ezsigntemplatedocument.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezsigntemplatesigner.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplate_getObject_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplate_id_isValid && m_fki_ezsignfoldertype_id_isValid && m_fki_language_id_isValid && m_s_language_name_x_isValid && m_s_ezsigntemplate_description_isValid && m_b_ezsigntemplate_adminonly_isValid && m_s_ezsignfoldertype_name_x_isValid && m_a_obj_ezsigntemplatesigner_isValid && true;
}

} // namespace OpenAPI
