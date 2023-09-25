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

#include "OAIEzsignfoldersignerassociation_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace Ezmaxapi {

OAIEzsignfoldersignerassociation_Response::OAIEzsignfoldersignerassociation_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfoldersignerassociation_Response::OAIEzsignfoldersignerassociation_Response() {
    this->initializeModel();
}

OAIEzsignfoldersignerassociation_Response::~OAIEzsignfoldersignerassociation_Response() {}

void OAIEzsignfoldersignerassociation_Response::initializeModel() {

    m_pki_ezsignfoldersignerassociation_id_isSet = false;
    m_pki_ezsignfoldersignerassociation_id_isValid = false;

    m_fki_ezsignfolder_id_isSet = false;
    m_fki_ezsignfolder_id_isValid = false;

    m_b_ezsignfoldersignerassociation_delayedsend_isSet = false;
    m_b_ezsignfoldersignerassociation_delayedsend_isValid = false;

    m_b_ezsignfoldersignerassociation_receivecopy_isSet = false;
    m_b_ezsignfoldersignerassociation_receivecopy_isValid = false;

    m_t_ezsignfoldersignerassociation_message_isSet = false;
    m_t_ezsignfoldersignerassociation_message_isValid = false;
}

void OAIEzsignfoldersignerassociation_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfoldersignerassociation_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignfoldersignerassociation_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignfoldersignerassociation_id, json[QString("pkiEzsignfoldersignerassociationID")]);
    m_pki_ezsignfoldersignerassociation_id_isSet = !json[QString("pkiEzsignfoldersignerassociationID")].isNull() && m_pki_ezsignfoldersignerassociation_id_isValid;

    m_fki_ezsignfolder_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfolder_id, json[QString("fkiEzsignfolderID")]);
    m_fki_ezsignfolder_id_isSet = !json[QString("fkiEzsignfolderID")].isNull() && m_fki_ezsignfolder_id_isValid;

    m_b_ezsignfoldersignerassociation_delayedsend_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignfoldersignerassociation_delayedsend, json[QString("bEzsignfoldersignerassociationDelayedsend")]);
    m_b_ezsignfoldersignerassociation_delayedsend_isSet = !json[QString("bEzsignfoldersignerassociationDelayedsend")].isNull() && m_b_ezsignfoldersignerassociation_delayedsend_isValid;

    m_b_ezsignfoldersignerassociation_receivecopy_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignfoldersignerassociation_receivecopy, json[QString("bEzsignfoldersignerassociationReceivecopy")]);
    m_b_ezsignfoldersignerassociation_receivecopy_isSet = !json[QString("bEzsignfoldersignerassociationReceivecopy")].isNull() && m_b_ezsignfoldersignerassociation_receivecopy_isValid;

    m_t_ezsignfoldersignerassociation_message_isValid = ::Ezmaxapi::fromJsonValue(m_t_ezsignfoldersignerassociation_message, json[QString("tEzsignfoldersignerassociationMessage")]);
    m_t_ezsignfoldersignerassociation_message_isSet = !json[QString("tEzsignfoldersignerassociationMessage")].isNull() && m_t_ezsignfoldersignerassociation_message_isValid;
}

QString OAIEzsignfoldersignerassociation_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfoldersignerassociation_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignfoldersignerassociation_id_isSet) {
        obj.insert(QString("pkiEzsignfoldersignerassociationID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignfoldersignerassociation_id));
    }
    if (m_fki_ezsignfolder_id_isSet) {
        obj.insert(QString("fkiEzsignfolderID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfolder_id));
    }
    if (m_b_ezsignfoldersignerassociation_delayedsend_isSet) {
        obj.insert(QString("bEzsignfoldersignerassociationDelayedsend"), ::Ezmaxapi::toJsonValue(m_b_ezsignfoldersignerassociation_delayedsend));
    }
    if (m_b_ezsignfoldersignerassociation_receivecopy_isSet) {
        obj.insert(QString("bEzsignfoldersignerassociationReceivecopy"), ::Ezmaxapi::toJsonValue(m_b_ezsignfoldersignerassociation_receivecopy));
    }
    if (m_t_ezsignfoldersignerassociation_message_isSet) {
        obj.insert(QString("tEzsignfoldersignerassociationMessage"), ::Ezmaxapi::toJsonValue(m_t_ezsignfoldersignerassociation_message));
    }
    return obj;
}

qint32 OAIEzsignfoldersignerassociation_Response::getPkiEzsignfoldersignerassociationId() const {
    return m_pki_ezsignfoldersignerassociation_id;
}
void OAIEzsignfoldersignerassociation_Response::setPkiEzsignfoldersignerassociationId(const qint32 &pki_ezsignfoldersignerassociation_id) {
    m_pki_ezsignfoldersignerassociation_id = pki_ezsignfoldersignerassociation_id;
    m_pki_ezsignfoldersignerassociation_id_isSet = true;
}

bool OAIEzsignfoldersignerassociation_Response::is_pki_ezsignfoldersignerassociation_id_Set() const{
    return m_pki_ezsignfoldersignerassociation_id_isSet;
}

bool OAIEzsignfoldersignerassociation_Response::is_pki_ezsignfoldersignerassociation_id_Valid() const{
    return m_pki_ezsignfoldersignerassociation_id_isValid;
}

qint32 OAIEzsignfoldersignerassociation_Response::getFkiEzsignfolderId() const {
    return m_fki_ezsignfolder_id;
}
void OAIEzsignfoldersignerassociation_Response::setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id) {
    m_fki_ezsignfolder_id = fki_ezsignfolder_id;
    m_fki_ezsignfolder_id_isSet = true;
}

bool OAIEzsignfoldersignerassociation_Response::is_fki_ezsignfolder_id_Set() const{
    return m_fki_ezsignfolder_id_isSet;
}

bool OAIEzsignfoldersignerassociation_Response::is_fki_ezsignfolder_id_Valid() const{
    return m_fki_ezsignfolder_id_isValid;
}

bool OAIEzsignfoldersignerassociation_Response::isBEzsignfoldersignerassociationDelayedsend() const {
    return m_b_ezsignfoldersignerassociation_delayedsend;
}
void OAIEzsignfoldersignerassociation_Response::setBEzsignfoldersignerassociationDelayedsend(const bool &b_ezsignfoldersignerassociation_delayedsend) {
    m_b_ezsignfoldersignerassociation_delayedsend = b_ezsignfoldersignerassociation_delayedsend;
    m_b_ezsignfoldersignerassociation_delayedsend_isSet = true;
}

bool OAIEzsignfoldersignerassociation_Response::is_b_ezsignfoldersignerassociation_delayedsend_Set() const{
    return m_b_ezsignfoldersignerassociation_delayedsend_isSet;
}

bool OAIEzsignfoldersignerassociation_Response::is_b_ezsignfoldersignerassociation_delayedsend_Valid() const{
    return m_b_ezsignfoldersignerassociation_delayedsend_isValid;
}

bool OAIEzsignfoldersignerassociation_Response::isBEzsignfoldersignerassociationReceivecopy() const {
    return m_b_ezsignfoldersignerassociation_receivecopy;
}
void OAIEzsignfoldersignerassociation_Response::setBEzsignfoldersignerassociationReceivecopy(const bool &b_ezsignfoldersignerassociation_receivecopy) {
    m_b_ezsignfoldersignerassociation_receivecopy = b_ezsignfoldersignerassociation_receivecopy;
    m_b_ezsignfoldersignerassociation_receivecopy_isSet = true;
}

bool OAIEzsignfoldersignerassociation_Response::is_b_ezsignfoldersignerassociation_receivecopy_Set() const{
    return m_b_ezsignfoldersignerassociation_receivecopy_isSet;
}

bool OAIEzsignfoldersignerassociation_Response::is_b_ezsignfoldersignerassociation_receivecopy_Valid() const{
    return m_b_ezsignfoldersignerassociation_receivecopy_isValid;
}

QString OAIEzsignfoldersignerassociation_Response::getTEzsignfoldersignerassociationMessage() const {
    return m_t_ezsignfoldersignerassociation_message;
}
void OAIEzsignfoldersignerassociation_Response::setTEzsignfoldersignerassociationMessage(const QString &t_ezsignfoldersignerassociation_message) {
    m_t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;
    m_t_ezsignfoldersignerassociation_message_isSet = true;
}

bool OAIEzsignfoldersignerassociation_Response::is_t_ezsignfoldersignerassociation_message_Set() const{
    return m_t_ezsignfoldersignerassociation_message_isSet;
}

bool OAIEzsignfoldersignerassociation_Response::is_t_ezsignfoldersignerassociation_message_Valid() const{
    return m_t_ezsignfoldersignerassociation_message_isValid;
}

bool OAIEzsignfoldersignerassociation_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignfoldersignerassociation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfolder_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfoldersignerassociation_delayedsend_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfoldersignerassociation_receivecopy_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsignfoldersignerassociation_message_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfoldersignerassociation_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignfoldersignerassociation_id_isValid && m_fki_ezsignfolder_id_isValid && m_b_ezsignfoldersignerassociation_delayedsend_isValid && m_b_ezsignfoldersignerassociation_receivecopy_isValid && m_t_ezsignfoldersignerassociation_message_isValid && true;
}

} // namespace Ezmaxapi
