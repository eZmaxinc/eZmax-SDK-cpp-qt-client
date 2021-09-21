/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.48
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignsigner_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignsigner_Request::OAIEzsignsigner_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignsigner_Request::OAIEzsignsigner_Request() {
    this->initializeModel();
}

OAIEzsignsigner_Request::~OAIEzsignsigner_Request() {}

void OAIEzsignsigner_Request::initializeModel() {

    m_fki_taxassignment_id_isSet = false;
    m_fki_taxassignment_id_isValid = false;

    m_fki_secretquestion_id_isSet = false;
    m_fki_secretquestion_id_isValid = false;

    m_e_ezsignsigner_logintype_isSet = false;
    m_e_ezsignsigner_logintype_isValid = false;

    m_s_ezsignsigner_secretanswer_isSet = false;
    m_s_ezsignsigner_secretanswer_isValid = false;
}

void OAIEzsignsigner_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignsigner_Request::fromJsonObject(QJsonObject json) {

    m_fki_taxassignment_id_isValid = ::OpenAPI::fromJsonValue(fki_taxassignment_id, json[QString("fkiTaxassignmentID")]);
    m_fki_taxassignment_id_isSet = !json[QString("fkiTaxassignmentID")].isNull() && m_fki_taxassignment_id_isValid;

    m_fki_secretquestion_id_isValid = ::OpenAPI::fromJsonValue(fki_secretquestion_id, json[QString("fkiSecretquestionID")]);
    m_fki_secretquestion_id_isSet = !json[QString("fkiSecretquestionID")].isNull() && m_fki_secretquestion_id_isValid;

    m_e_ezsignsigner_logintype_isValid = ::OpenAPI::fromJsonValue(e_ezsignsigner_logintype, json[QString("eEzsignsignerLogintype")]);
    m_e_ezsignsigner_logintype_isSet = !json[QString("eEzsignsignerLogintype")].isNull() && m_e_ezsignsigner_logintype_isValid;

    m_s_ezsignsigner_secretanswer_isValid = ::OpenAPI::fromJsonValue(s_ezsignsigner_secretanswer, json[QString("sEzsignsignerSecretanswer")]);
    m_s_ezsignsigner_secretanswer_isSet = !json[QString("sEzsignsignerSecretanswer")].isNull() && m_s_ezsignsigner_secretanswer_isValid;
}

QString OAIEzsignsigner_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignsigner_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_taxassignment_id_isSet) {
        obj.insert(QString("fkiTaxassignmentID"), ::OpenAPI::toJsonValue(fki_taxassignment_id));
    }
    if (m_fki_secretquestion_id_isSet) {
        obj.insert(QString("fkiSecretquestionID"), ::OpenAPI::toJsonValue(fki_secretquestion_id));
    }
    if (m_e_ezsignsigner_logintype_isSet) {
        obj.insert(QString("eEzsignsignerLogintype"), ::OpenAPI::toJsonValue(e_ezsignsigner_logintype));
    }
    if (m_s_ezsignsigner_secretanswer_isSet) {
        obj.insert(QString("sEzsignsignerSecretanswer"), ::OpenAPI::toJsonValue(s_ezsignsigner_secretanswer));
    }
    return obj;
}

qint32 OAIEzsignsigner_Request::getFkiTaxassignmentId() const {
    return fki_taxassignment_id;
}
void OAIEzsignsigner_Request::setFkiTaxassignmentId(const qint32 &fki_taxassignment_id) {
    this->fki_taxassignment_id = fki_taxassignment_id;
    this->m_fki_taxassignment_id_isSet = true;
}

bool OAIEzsignsigner_Request::is_fki_taxassignment_id_Set() const{
    return m_fki_taxassignment_id_isSet;
}

bool OAIEzsignsigner_Request::is_fki_taxassignment_id_Valid() const{
    return m_fki_taxassignment_id_isValid;
}

qint32 OAIEzsignsigner_Request::getFkiSecretquestionId() const {
    return fki_secretquestion_id;
}
void OAIEzsignsigner_Request::setFkiSecretquestionId(const qint32 &fki_secretquestion_id) {
    this->fki_secretquestion_id = fki_secretquestion_id;
    this->m_fki_secretquestion_id_isSet = true;
}

bool OAIEzsignsigner_Request::is_fki_secretquestion_id_Set() const{
    return m_fki_secretquestion_id_isSet;
}

bool OAIEzsignsigner_Request::is_fki_secretquestion_id_Valid() const{
    return m_fki_secretquestion_id_isValid;
}

QString OAIEzsignsigner_Request::getEEzsignsignerLogintype() const {
    return e_ezsignsigner_logintype;
}
void OAIEzsignsigner_Request::setEEzsignsignerLogintype(const QString &e_ezsignsigner_logintype) {
    this->e_ezsignsigner_logintype = e_ezsignsigner_logintype;
    this->m_e_ezsignsigner_logintype_isSet = true;
}

bool OAIEzsignsigner_Request::is_e_ezsignsigner_logintype_Set() const{
    return m_e_ezsignsigner_logintype_isSet;
}

bool OAIEzsignsigner_Request::is_e_ezsignsigner_logintype_Valid() const{
    return m_e_ezsignsigner_logintype_isValid;
}

QString OAIEzsignsigner_Request::getSEzsignsignerSecretanswer() const {
    return s_ezsignsigner_secretanswer;
}
void OAIEzsignsigner_Request::setSEzsignsignerSecretanswer(const QString &s_ezsignsigner_secretanswer) {
    this->s_ezsignsigner_secretanswer = s_ezsignsigner_secretanswer;
    this->m_s_ezsignsigner_secretanswer_isSet = true;
}

bool OAIEzsignsigner_Request::is_s_ezsignsigner_secretanswer_Set() const{
    return m_s_ezsignsigner_secretanswer_isSet;
}

bool OAIEzsignsigner_Request::is_s_ezsignsigner_secretanswer_Valid() const{
    return m_s_ezsignsigner_secretanswer_isValid;
}

bool OAIEzsignsigner_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_taxassignment_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_secretquestion_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignsigner_logintype_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignsigner_secretanswer_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignsigner_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_taxassignment_id_isValid && m_e_ezsignsigner_logintype_isValid && true;
}

} // namespace OpenAPI
