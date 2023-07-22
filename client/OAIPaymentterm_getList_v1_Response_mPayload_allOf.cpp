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

#include "OAIPaymentterm_getList_v1_Response_mPayload_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPaymentterm_getList_v1_Response_mPayload_allOf::OAIPaymentterm_getList_v1_Response_mPayload_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPaymentterm_getList_v1_Response_mPayload_allOf::OAIPaymentterm_getList_v1_Response_mPayload_allOf() {
    this->initializeModel();
}

OAIPaymentterm_getList_v1_Response_mPayload_allOf::~OAIPaymentterm_getList_v1_Response_mPayload_allOf() {}

void OAIPaymentterm_getList_v1_Response_mPayload_allOf::initializeModel() {

    m_a_obj_paymentterm_isSet = false;
    m_a_obj_paymentterm_isValid = false;
}

void OAIPaymentterm_getList_v1_Response_mPayload_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPaymentterm_getList_v1_Response_mPayload_allOf::fromJsonObject(QJsonObject json) {

    m_a_obj_paymentterm_isValid = ::OpenAPI::fromJsonValue(a_obj_paymentterm, json[QString("a_objPaymentterm")]);
    m_a_obj_paymentterm_isSet = !json[QString("a_objPaymentterm")].isNull() && m_a_obj_paymentterm_isValid;
}

QString OAIPaymentterm_getList_v1_Response_mPayload_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPaymentterm_getList_v1_Response_mPayload_allOf::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_paymentterm.size() > 0) {
        obj.insert(QString("a_objPaymentterm"), ::OpenAPI::toJsonValue(a_obj_paymentterm));
    }
    return obj;
}

QList<OAIPaymentterm_ListElement> OAIPaymentterm_getList_v1_Response_mPayload_allOf::getAObjPaymentterm() const {
    return a_obj_paymentterm;
}
void OAIPaymentterm_getList_v1_Response_mPayload_allOf::setAObjPaymentterm(const QList<OAIPaymentterm_ListElement> &a_obj_paymentterm) {
    this->a_obj_paymentterm = a_obj_paymentterm;
    this->m_a_obj_paymentterm_isSet = true;
}

bool OAIPaymentterm_getList_v1_Response_mPayload_allOf::is_a_obj_paymentterm_Set() const{
    return m_a_obj_paymentterm_isSet;
}

bool OAIPaymentterm_getList_v1_Response_mPayload_allOf::is_a_obj_paymentterm_Valid() const{
    return m_a_obj_paymentterm_isValid;
}

bool OAIPaymentterm_getList_v1_Response_mPayload_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_paymentterm.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPaymentterm_getList_v1_Response_mPayload_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_paymentterm_isValid && true;
}

} // namespace OpenAPI