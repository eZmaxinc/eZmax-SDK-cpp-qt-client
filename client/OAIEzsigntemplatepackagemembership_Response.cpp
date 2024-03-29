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

#include "OAIEzsigntemplatepackagemembership_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatepackagemembership_Response::OAIEzsigntemplatepackagemembership_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatepackagemembership_Response::OAIEzsigntemplatepackagemembership_Response() {
    this->initializeModel();
}

OAIEzsigntemplatepackagemembership_Response::~OAIEzsigntemplatepackagemembership_Response() {}

void OAIEzsigntemplatepackagemembership_Response::initializeModel() {

    m_pki_ezsigntemplatepackagemembership_id_isSet = false;
    m_pki_ezsigntemplatepackagemembership_id_isValid = false;

    m_fki_ezsigntemplatepackage_id_isSet = false;
    m_fki_ezsigntemplatepackage_id_isValid = false;

    m_fki_ezsigntemplate_id_isSet = false;
    m_fki_ezsigntemplate_id_isValid = false;

    m_i_ezsigntemplatepackagemembership_order_isSet = false;
    m_i_ezsigntemplatepackagemembership_order_isValid = false;
}

void OAIEzsigntemplatepackagemembership_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatepackagemembership_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatepackagemembership_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplatepackagemembership_id, json[QString("pkiEzsigntemplatepackagemembershipID")]);
    m_pki_ezsigntemplatepackagemembership_id_isSet = !json[QString("pkiEzsigntemplatepackagemembershipID")].isNull() && m_pki_ezsigntemplatepackagemembership_id_isValid;

    m_fki_ezsigntemplatepackage_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplatepackage_id, json[QString("fkiEzsigntemplatepackageID")]);
    m_fki_ezsigntemplatepackage_id_isSet = !json[QString("fkiEzsigntemplatepackageID")].isNull() && m_fki_ezsigntemplatepackage_id_isValid;

    m_fki_ezsigntemplate_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplate_id, json[QString("fkiEzsigntemplateID")]);
    m_fki_ezsigntemplate_id_isSet = !json[QString("fkiEzsigntemplateID")].isNull() && m_fki_ezsigntemplate_id_isValid;

    m_i_ezsigntemplatepackagemembership_order_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatepackagemembership_order, json[QString("iEzsigntemplatepackagemembershipOrder")]);
    m_i_ezsigntemplatepackagemembership_order_isSet = !json[QString("iEzsigntemplatepackagemembershipOrder")].isNull() && m_i_ezsigntemplatepackagemembership_order_isValid;
}

QString OAIEzsigntemplatepackagemembership_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatepackagemembership_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatepackagemembership_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatepackagemembershipID"), ::OpenAPI::toJsonValue(pki_ezsigntemplatepackagemembership_id));
    }
    if (m_fki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatepackageID"), ::OpenAPI::toJsonValue(fki_ezsigntemplatepackage_id));
    }
    if (m_fki_ezsigntemplate_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateID"), ::OpenAPI::toJsonValue(fki_ezsigntemplate_id));
    }
    if (m_i_ezsigntemplatepackagemembership_order_isSet) {
        obj.insert(QString("iEzsigntemplatepackagemembershipOrder"), ::OpenAPI::toJsonValue(i_ezsigntemplatepackagemembership_order));
    }
    return obj;
}

qint32 OAIEzsigntemplatepackagemembership_Response::getPkiEzsigntemplatepackagemembershipId() const {
    return pki_ezsigntemplatepackagemembership_id;
}
void OAIEzsigntemplatepackagemembership_Response::setPkiEzsigntemplatepackagemembershipId(const qint32 &pki_ezsigntemplatepackagemembership_id) {
    this->pki_ezsigntemplatepackagemembership_id = pki_ezsigntemplatepackagemembership_id;
    this->m_pki_ezsigntemplatepackagemembership_id_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_Response::is_pki_ezsigntemplatepackagemembership_id_Set() const{
    return m_pki_ezsigntemplatepackagemembership_id_isSet;
}

bool OAIEzsigntemplatepackagemembership_Response::is_pki_ezsigntemplatepackagemembership_id_Valid() const{
    return m_pki_ezsigntemplatepackagemembership_id_isValid;
}

qint32 OAIEzsigntemplatepackagemembership_Response::getFkiEzsigntemplatepackageId() const {
    return fki_ezsigntemplatepackage_id;
}
void OAIEzsigntemplatepackagemembership_Response::setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id) {
    this->fki_ezsigntemplatepackage_id = fki_ezsigntemplatepackage_id;
    this->m_fki_ezsigntemplatepackage_id_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_Response::is_fki_ezsigntemplatepackage_id_Set() const{
    return m_fki_ezsigntemplatepackage_id_isSet;
}

bool OAIEzsigntemplatepackagemembership_Response::is_fki_ezsigntemplatepackage_id_Valid() const{
    return m_fki_ezsigntemplatepackage_id_isValid;
}

qint32 OAIEzsigntemplatepackagemembership_Response::getFkiEzsigntemplateId() const {
    return fki_ezsigntemplate_id;
}
void OAIEzsigntemplatepackagemembership_Response::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    this->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    this->m_fki_ezsigntemplate_id_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_Response::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool OAIEzsigntemplatepackagemembership_Response::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

qint32 OAIEzsigntemplatepackagemembership_Response::getIEzsigntemplatepackagemembershipOrder() const {
    return i_ezsigntemplatepackagemembership_order;
}
void OAIEzsigntemplatepackagemembership_Response::setIEzsigntemplatepackagemembershipOrder(const qint32 &i_ezsigntemplatepackagemembership_order) {
    this->i_ezsigntemplatepackagemembership_order = i_ezsigntemplatepackagemembership_order;
    this->m_i_ezsigntemplatepackagemembership_order_isSet = true;
}

bool OAIEzsigntemplatepackagemembership_Response::is_i_ezsigntemplatepackagemembership_order_Set() const{
    return m_i_ezsigntemplatepackagemembership_order_isSet;
}

bool OAIEzsigntemplatepackagemembership_Response::is_i_ezsigntemplatepackagemembership_order_Valid() const{
    return m_i_ezsigntemplatepackagemembership_order_isValid;
}

bool OAIEzsigntemplatepackagemembership_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatepackagemembership_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatepackage_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplate_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatepackagemembership_order_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatepackagemembership_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatepackagemembership_id_isValid && m_fki_ezsigntemplatepackage_id_isValid && m_fki_ezsigntemplate_id_isValid && m_i_ezsigntemplatepackagemembership_order_isValid && true;
}

} // namespace OpenAPI
