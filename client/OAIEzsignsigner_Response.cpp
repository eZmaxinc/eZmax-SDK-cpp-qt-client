/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignsigner_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignsigner_Response::OAIEzsignsigner_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignsigner_Response::OAIEzsignsigner_Response() {
    this->initializeModel();
}

OAIEzsignsigner_Response::~OAIEzsignsigner_Response() {}

void OAIEzsignsigner_Response::initializeModel() {

    m_pki_ezsignsigner_id_isSet = false;
    m_pki_ezsignsigner_id_isValid = false;

    m_fki_taxassignment_id_isSet = false;
    m_fki_taxassignment_id_isValid = false;

    m_fki_secretquestion_id_isSet = false;
    m_fki_secretquestion_id_isValid = false;

    m_fki_userlogintype_id_isSet = false;
    m_fki_userlogintype_id_isValid = false;

    m_s_userlogintype_description_x_isSet = false;
    m_s_userlogintype_description_x_isValid = false;
}

void OAIEzsignsigner_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignsigner_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignsigner_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignsigner_id, json[QString("pkiEzsignsignerID")]);
    m_pki_ezsignsigner_id_isSet = !json[QString("pkiEzsignsignerID")].isNull() && m_pki_ezsignsigner_id_isValid;

    m_fki_taxassignment_id_isValid = ::OpenAPI::fromJsonValue(fki_taxassignment_id, json[QString("fkiTaxassignmentID")]);
    m_fki_taxassignment_id_isSet = !json[QString("fkiTaxassignmentID")].isNull() && m_fki_taxassignment_id_isValid;

    m_fki_secretquestion_id_isValid = ::OpenAPI::fromJsonValue(fki_secretquestion_id, json[QString("fkiSecretquestionID")]);
    m_fki_secretquestion_id_isSet = !json[QString("fkiSecretquestionID")].isNull() && m_fki_secretquestion_id_isValid;

    m_fki_userlogintype_id_isValid = ::OpenAPI::fromJsonValue(fki_userlogintype_id, json[QString("fkiUserlogintypeID")]);
    m_fki_userlogintype_id_isSet = !json[QString("fkiUserlogintypeID")].isNull() && m_fki_userlogintype_id_isValid;

    m_s_userlogintype_description_x_isValid = ::OpenAPI::fromJsonValue(s_userlogintype_description_x, json[QString("sUserlogintypeDescriptionX")]);
    m_s_userlogintype_description_x_isSet = !json[QString("sUserlogintypeDescriptionX")].isNull() && m_s_userlogintype_description_x_isValid;
}

QString OAIEzsignsigner_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignsigner_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignsigner_id_isSet) {
        obj.insert(QString("pkiEzsignsignerID"), ::OpenAPI::toJsonValue(pki_ezsignsigner_id));
    }
    if (m_fki_taxassignment_id_isSet) {
        obj.insert(QString("fkiTaxassignmentID"), ::OpenAPI::toJsonValue(fki_taxassignment_id));
    }
    if (m_fki_secretquestion_id_isSet) {
        obj.insert(QString("fkiSecretquestionID"), ::OpenAPI::toJsonValue(fki_secretquestion_id));
    }
    if (m_fki_userlogintype_id_isSet) {
        obj.insert(QString("fkiUserlogintypeID"), ::OpenAPI::toJsonValue(fki_userlogintype_id));
    }
    if (m_s_userlogintype_description_x_isSet) {
        obj.insert(QString("sUserlogintypeDescriptionX"), ::OpenAPI::toJsonValue(s_userlogintype_description_x));
    }
    return obj;
}

qint32 OAIEzsignsigner_Response::getPkiEzsignsignerId() const {
    return pki_ezsignsigner_id;
}
void OAIEzsignsigner_Response::setPkiEzsignsignerId(const qint32 &pki_ezsignsigner_id) {
    this->pki_ezsignsigner_id = pki_ezsignsigner_id;
    this->m_pki_ezsignsigner_id_isSet = true;
}

bool OAIEzsignsigner_Response::is_pki_ezsignsigner_id_Set() const{
    return m_pki_ezsignsigner_id_isSet;
}

bool OAIEzsignsigner_Response::is_pki_ezsignsigner_id_Valid() const{
    return m_pki_ezsignsigner_id_isValid;
}

qint32 OAIEzsignsigner_Response::getFkiTaxassignmentId() const {
    return fki_taxassignment_id;
}
void OAIEzsignsigner_Response::setFkiTaxassignmentId(const qint32 &fki_taxassignment_id) {
    this->fki_taxassignment_id = fki_taxassignment_id;
    this->m_fki_taxassignment_id_isSet = true;
}

bool OAIEzsignsigner_Response::is_fki_taxassignment_id_Set() const{
    return m_fki_taxassignment_id_isSet;
}

bool OAIEzsignsigner_Response::is_fki_taxassignment_id_Valid() const{
    return m_fki_taxassignment_id_isValid;
}

qint32 OAIEzsignsigner_Response::getFkiSecretquestionId() const {
    return fki_secretquestion_id;
}
void OAIEzsignsigner_Response::setFkiSecretquestionId(const qint32 &fki_secretquestion_id) {
    this->fki_secretquestion_id = fki_secretquestion_id;
    this->m_fki_secretquestion_id_isSet = true;
}

bool OAIEzsignsigner_Response::is_fki_secretquestion_id_Set() const{
    return m_fki_secretquestion_id_isSet;
}

bool OAIEzsignsigner_Response::is_fki_secretquestion_id_Valid() const{
    return m_fki_secretquestion_id_isValid;
}

qint32 OAIEzsignsigner_Response::getFkiUserlogintypeId() const {
    return fki_userlogintype_id;
}
void OAIEzsignsigner_Response::setFkiUserlogintypeId(const qint32 &fki_userlogintype_id) {
    this->fki_userlogintype_id = fki_userlogintype_id;
    this->m_fki_userlogintype_id_isSet = true;
}

bool OAIEzsignsigner_Response::is_fki_userlogintype_id_Set() const{
    return m_fki_userlogintype_id_isSet;
}

bool OAIEzsignsigner_Response::is_fki_userlogintype_id_Valid() const{
    return m_fki_userlogintype_id_isValid;
}

QString OAIEzsignsigner_Response::getSUserlogintypeDescriptionX() const {
    return s_userlogintype_description_x;
}
void OAIEzsignsigner_Response::setSUserlogintypeDescriptionX(const QString &s_userlogintype_description_x) {
    this->s_userlogintype_description_x = s_userlogintype_description_x;
    this->m_s_userlogintype_description_x_isSet = true;
}

bool OAIEzsignsigner_Response::is_s_userlogintype_description_x_Set() const{
    return m_s_userlogintype_description_x_isSet;
}

bool OAIEzsignsigner_Response::is_s_userlogintype_description_x_Valid() const{
    return m_s_userlogintype_description_x_isValid;
}

bool OAIEzsignsigner_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignsigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_taxassignment_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_secretquestion_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_userlogintype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_userlogintype_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignsigner_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignsigner_id_isValid && m_fki_taxassignment_id_isValid && m_fki_userlogintype_id_isValid && m_s_userlogintype_description_x_isValid && true;
}

} // namespace OpenAPI
